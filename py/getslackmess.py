import os
from pathlib import Path
import string
from tracemalloc import start
from click import echo
from dotenv import load_dotenv
from slack_sdk.errors import SlackApiError
import slack_sdk
import logging
import telegram
from telegram.ext import filters, ApplicationBuilder, ContextTypes, CommandHandler, MessageHandler
import json
logging.basicConfig(level=logging.DEBUG)
# channel_name = "general"
# #test if slack_api working
# try:
# 	api_response = client.api_test()
# except SlackApiError as e:
# 	print(f"Error: {e}")
# 	exit()
#test if telegram api working
# async def test():
# 	bot = telegram.Bot(os.environ['TELEGRAM_TOKEN'])
# 	try:
# 		result = await bot.get_me()
# 	except 
env_path = Path('.') / '.env'
load_dotenv(dotenv_path=env_path)
client = slack_sdk.WebClient(token=os.environ['SLACK_TOKEN'])
def GetChannelHistory(channel_name) -> string:
	try:
		for result in client.conversations_list():
			for channel in result["channels"]:
				if channel["name"] == channel_name:
					conversation_id = channel["id"]
					response = client.chat_postMessage(channel=conversation_id, text="Hello from your app! :tada:")
					result = client.conversations_history(channel=conversation_id)
					return result
	except SlackApiError as e:
		return e
async def start(update: telegram.Update, context: ContextTypes.DEFAULT_TYPE):
	await context.bot.send_message(chat_id=update.effective_chat.id, text="Hello!")
	conversation_history = GetChannelHistory("general")
	for message in conversation_history["messages"]:
		await context.bot.send_message(chat_id=update.effective_chat.id, text=message["text"])


async def echo(update: telegram.Update, context: ContextTypes.DEFAULT_TYPE):
	await context.bot.send_message(chat_id=update.effective_chat.id, text=update.message.text)

async def end(update: telegram.Update, context: ContextTypes.DEFAULT_TYPE):
	await context.bot.send_message(chat_id=update.effective_chat.id, text="Bye!")
	await application.stop()
	application.shutdown()
	os._exit(0)

env_path = Path('.') / '.env'
load_dotenv(dotenv_path=env_path)
client = slack_sdk.WebClient(token=os.environ['SLACK_TOKEN'])
application = ApplicationBuilder().token(os.environ['TELEGRAM_TOKEN']).build()
if __name__ == "__main__":
	start_handler = CommandHandler('start', start)
	application.add_handler(start_handler)
	message_handler = MessageHandler(filters=filters.TEXT & (~filters.COMMAND), callback=echo)
	end_handler = CommandHandler('end', end)
	application.add_handler(message_handler)
	application.add_handler(end_handler)
	application.run_polling()