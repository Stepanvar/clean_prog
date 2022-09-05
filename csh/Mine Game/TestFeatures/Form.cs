namespace TestFeatures
{
	public interface IDrawable
	{
		Form MyForm { get; }
	}
	public class Form
	{
		public int X 		{ get; private set; }
		public int Y        { get; private set; }
		public int Width	{ get; set; }
		public int Height	{ get; set; }

		public void SetLocation(int x, int y)
		{
			X = x;
			Y = y;
		}
	}
}