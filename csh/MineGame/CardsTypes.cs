using System;
namespace MineGame
{
	public enum CardType
	{
		None = -1,
		Mine,
		MagicTower
	}
	public class Mine : CardModel
	{
		public int GoldCapacity { get; private set; }
		public Mine(int health, int capacity, Form form, string benefitname = "Gold") : base(health, form, benefitname)
		{
			GoldCapacity = capacity;
		}
		public void ProduceGold(ref int Balance)
		{
			Balance += GoldCapacity;
		}
	}
	public class MagicTower : CardModel
	{
		public int Damage { get; private set; }
		public MagicTower(int health, int damage, Form form, string benefitname = "Damage") : base(health, form, benefitname)
		{
			Damage = damage;
		}
		public void CauseDamage(CardModel card)
		{
			card.HealthChange(Damage);
		}
	}
}
