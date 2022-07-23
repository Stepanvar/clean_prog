using System;
using System.Collections.Generic;

namespace TestFeatures
{
	public interface IDestroyable
    {
    	int Health { get; }
		void Destroyed();
		void Created();
        int HealthChange(int modifier);
    }
    public abstract class BuildingModel: IDestroyable, IDrawable
    {
        public int Health 			{ get; private set; }
		public string BenefitName	{ get; protected set; }
		public int Capacity 		{ get; private set; }
		public Form MyForm 			{ get; private set; }

		public void Created()
        {
            Console.WriteLine("{0} is created", GetType().Name);
        }

        public void Destroyed()
        {
            Console.WriteLine("{0} is destroyed", GetType().Name);
        }

        public int HealthChange(int modifier)
        {
            Health += modifier;
			if (Health <= 0)
			{
				Destroyed();
				return -1;
			}
			return 0;
		}
		protected BuildingModel(int health, int capacity, Form form, string benefitname)
        {
			BenefitName = benefitname;
			Capacity = capacity;
			Health = health;
			MyForm = form;
			Created();
        }
		public virtual void PrintInfo()
		{
			Console.WriteLine("Health: {0}, Capacity: {1}, BenefitName: {2}", Health, Capacity, BenefitName);
		}
	}
	public class Mine : BuildingModel
	{
		public Mine(int health, int capacity, Form form, string benefitname = "Gold") : base(health, capacity, form, benefitname)
		{
		}
	}
	public class Barrack : BuildingModel
	{
		public Barrack(int health, int capacity, Form form, string benefitname = "Troop") : base(health, capacity, form, benefitname)
		{
		}
	}
	public class Test
    {
        public static void Main(string[] args)
        {
            BuildingModel building = new Mine(50, 30, new Form() { Width = 64, Height = 64 });
			BuildingModel mine = new Barrack(25, 30, new Form() { Width = 64, Height = 64 });
			List<BuildingModel> buildList = new List<BuildingModel>() { building, mine };
			for (int i = 0; i < 51; i++)
			{
				int damage = -1;
				for (int k = 0; k < buildList.Count; k++)
				{
					int destroy = buildList[k].HealthChange(damage);
					if (destroy == -1)
					{
						Console.WriteLine("{0} is removed", buildList[k].GetType().Name);
						buildList.Remove(buildList[k]);
					}
				}
			}
			Console.WriteLine("End Game");
		}
	}
}
