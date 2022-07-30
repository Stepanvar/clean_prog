using System;
using System.IO;
namespace MineGame
{
	public static class Helper
	{
		public static CardType GetCardType(CardModel cardModel)
		{
			if (cardModel is Mine)
				return CardType.Mine;
			else if (cardModel is MagicTower)
				return CardType.MagicTower;
			else
				return CardType.None;
		}
		public static CardModel GetRndCard()
		{
			Random rnd = new Random();
			int choose = rnd.Next(Helper.Data.CardTypeNumber);
			switch (choose)
			{
				case 0:
					return new Mine(
					health: rnd.Next(Helper.Data.PlayerHealth, Helper.Data.PlayerHealth + Helper.Data.MaxShift),
					capacity: Helper.Data.MineCapacity,
					form: new Form() { Height = Helper.Data.ObjHeight, Width = Helper.Data.ObjWidth });
				case 1:
					return new MagicTower(
					health: rnd.Next(Helper.Data.PlayerHealth, Helper.Data.PlayerHealth + Helper.Data.MaxShift),
					damage: Helper.Data.MagicTowerDamage,
					form: new Form() { Height = Helper.Data.ObjHeight, Width = Helper.Data.ObjWidth });
				default:
					return null;
			}
		}
		public static class Data
		{
			public static readonly int HandCardNumber = 5;
			public static readonly int MineHealth = 50;
			public static readonly int MineCapacity = 25;
			public static readonly int MagicTowerHealth = 30;
			public static readonly int MagicTowerDamage = -10;
			public static readonly int PlayerHealth = 100;
			public static readonly int PlayerCapacity = 5;
			public static readonly int TalonCardAmount = 100;
			public static readonly int MaxShift = 5;
			public static readonly int ObjWidth = 64;
			public static readonly int ObjHeight = 64;
			public static readonly int CardTypeNumber = 2;
			public static readonly int PlayerBalance = 100;

		}
		public class Log
		{
		}
	}
}
