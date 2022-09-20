using System;
using System.Collections.Generic;

namespace MineGame
{

	public class CardList: List<CardModel>
	{
		public void ListAll()
		{
			foreach (var item in this)
			{
				Console.WriteLine($"{this.IndexOf(item)}:");
				item.PrintInfo();
			}
		}
		public new void Add(CardModel item)
		{
			base.Add(item);
			Console.WriteLine("{0} was added", item.GetType().Name);
		}
		public CardList()
		{

		}
	}
	public class Hand: CardList
	{
		public void FillHand()
		{
			for (int i = 0; i < Helper.Data.HandCardNumber; i++)
			{
				var cardmodel = Helper.GetRndCard();
				if (cardmodel != null)
					this.Add(cardmodel);
				else
					Console.WriteLine("Null fillhand");
			}
		}

		public void ActivateCard(int CardIndex, CardList ActivatedCards, Player player)
		{
			var card = this[CardIndex];
			if (card != null)
				card.Created();
			this.Remove(card);
			card.Activate(player);
			ActivatedCards.Add(card);
			card = Helper.GetRndCard();
			this.Add(card);
		}
	}
}
