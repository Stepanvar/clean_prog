import pyautogui
import loremipsum

i = 0
pyautogui.click("chat.png")

for i in range(100):
	mess = loremipsum.generate(1, loremipsum.ParagraphLength.SHORT)
	pyautogui.write(mess, interval=0.01)
	pyautogui.press('enter')