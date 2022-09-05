using System;
namespace MineGame
{
	public interface IDrawable
	{
		Form MyForm { get; }
	}

	public interface IDestroyable
	{
		int Health { get; }
		void Destroyed();
		void Created();
		int HealthChange(int modifier);
	}
	public interface ICostable
	{
		int Cost { get; }
	}
	public interface ICardAction
	{
		void Action(CardModel card);
	}
}
