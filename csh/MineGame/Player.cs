using System;
using System.Collections.Generic;
using System.Linq;

namespace MineGame
{
	public class Player : Object
	{
		public string Name { get; set; }
		public Hand MyHand { get; set; }
		public CardList ActivatedCards { get; set; }
		public int Balance;
		public Player(int health, int balance, Form form) : base(health, form)
		{
			Balance = balance;
			SetName();
		}

		private void SetName()
		{
			Console.WriteLine("Enter Player name:");
			Name = Console.ReadLine();
			Console.WriteLine("Welcome to the game, {0}!", Name);
		}
		public void MakeMove(Player[] players)
		{
			Console.WriteLine("{0} YOUR TURN!", this.Name.ToUpper());
			Console.WriteLine("Your Hand:");
			MyHand.ListAll();
			Console.WriteLine("Choose index of the card to activate");
			int index = 0;
			while (!int.TryParse(Console.ReadLine(), out index) && index >= 0 && index < MyHand.Count) { }
			MyHand.ActivateCard(index, ActivatedCards, this);
			Console.WriteLine("Activated cards:");
			ActivatedCards.ListAll();
			for (int i = 0; i < ActivatedCards.Count; i++)
			{
				var CurrentCardType = Helper.GetCardType(ActivatedCards[i]);
				switch (CurrentCardType)
				{
					case CardType.Mine:
						Console.WriteLine("Get Gold!");
						((Mine)ActivatedCards[i]).ProduceGold(ref Balance);
						break;
					case CardType.MagicTower:
						Console.WriteLine("Fire!!!");
						for (int p = 0; p < players.Length; p++)
						{
							Console.WriteLine("{0}: {1}", p, players[p].Name);
						}
						Console.WriteLine("Choose index of player to attack");
						while (!int.TryParse(Console.ReadLine(), out index) && index >= 0 && index < players.Length) { }
						players[index].HealthChange(((MagicTower)ActivatedCards[i]).Damage);
						break;
					default:
						break;
				}

			}
		}

		public void Player_DestroyCardEvent(Guid guid)
		{
			var cardToDestroy = ActivatedCards.FirstOrDefault(c => c.Id == guid);
			if (cardToDestroy != null)
				ActivatedCards.Remove(cardToDestroy);
			else
				Console.WriteLine("Player_DestroyCardEvent");
		}

		public override void Destroyed()
		{
			Console.WriteLine("God player was killed! Press F");
			Environment.Exit(0);
		}
	}
}
