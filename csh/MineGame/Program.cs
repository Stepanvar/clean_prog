using System;
//TODO: add cost of cards
//TODO: remove ability to execute mine
namespace MineGame
{

	class MainClass
	{
		public static void Main(string[] args)
		{
			Random rnd = new Random();
			Console.WriteLine("Try Factory pattern");
			int PlayerNum = 0;
			Console.WriteLine("Enter correct Player number:");
			while (!int.TryParse(Console.ReadLine(), out PlayerNum))
			{
				Console.WriteLine("Enter correct Player number:");
			}
			Player[] players = new Player[PlayerNum];
			for (int i = 0; i < PlayerNum; i++)
			{
				players[i] = new Player(
				health: rnd.Next(Helper.Data.PlayerHealth, Helper.Data.PlayerHealth + Helper.Data.MaxShift),
				balance: Helper.Data.PlayerBalance,
				form: new Form() { Height = Helper.Data.ObjHeight, Width = Helper.Data.ObjWidth })
				{
					MyHand = new Hand(),
					ActivatedCards = new CardList()
				};
				Console.WriteLine("{0} has:", players[i].Name);
				players[i].MyHand.FillHand();
				players[i].MyHand.ListAll();
			}
			while (true)
			{
				if (Console.ReadLine() == "quit")
				{
					Console.WriteLine("Game ended");
					break;
				}
				for (int i = 0; i < PlayerNum; i++)
				{
					players[i].MakeMove(players);
				}
			}
		}
	}
}
