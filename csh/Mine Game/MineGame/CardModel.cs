using System;

namespace MineGame
{
	public abstract class Object: IDestroyable, IDrawable
	{
		public int Health { get; private set; }
		public Form MyForm { get; private set; }

		public virtual void Created()
		{
			Console.WriteLine("{0} is created", GetType().Name);
		}

		public virtual void Destroyed()
		{
			Console.WriteLine("{0} is destroyed", GetType().Name);
		}

		public virtual int HealthChange(int modifier)
		{
			Health += modifier;
			if (Health <= 0)
			{
				Destroyed();
				return -1;
			}
			return 0;
		}
		protected Object(int health, Form form)
		{
			Health = health;
			MyForm = form;
		}
		public virtual void PrintInfo()
		{
			Console.WriteLine("Name: {0} Health: {1}", this.GetType().Name, Health);
		}
	}
	public abstract class CardModel : Object
	{
		public Guid Id { get; private set; }
		public string BenefitName { get; protected set; }
		public Player Owner { get; set; }

		protected CardModel(int health, Form form, string benefitname) : base(health, form)
		{
			Id = Guid.NewGuid();
			BenefitName = benefitname;
		}
		public virtual void Activate(Player player)
		{
			Owner = player;
			Console.WriteLine("{0} was activated", GetType().Name);
		}

		public override void PrintInfo()
		{
			base.PrintInfo();
			Console.WriteLine("Produce: {0}", BenefitName);
		}

		public override void Destroyed()
		{
			base.Destroyed();
			Owner.Player_DestroyCardEvent(Id);
		}
	}
}
