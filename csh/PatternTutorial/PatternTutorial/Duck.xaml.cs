using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using static System.Net.Mime.MediaTypeNames;

namespace PatternTutorial
{
	/// <summary>
	/// Interaction logic for Duck.xaml
	/// </summary>
	public partial class Duck : Window
	{
		public abstract class ADuck
		{
			public string Text { get; set; }
			public IFlyable Flyable { get; set; }
			public abstract void Swim();
			public abstract void Quack();
			public virtual string IFly()
			{
				return Flyable.Fly();
			}
			public virtual void Fly()
			{
				Text += "\nI'm flying, bitch";
			}
			public virtual void Move()
			{
				Text += "\nI like to move it";
			}
			public virtual void Display(TextBlock TextBlock)
			{
				Text = this.GetType().Name;
				this.Quack();
				this.Swim();
				this.Fly();
				this.Move();
				Text += this.IFly();
				TextBlock.Text = Text;
			}
		}
		public class MallardDuck : ADuck
		{

			public override void Quack()
			{
				Text += " Bugaga ";
			}

			public override void Swim()
			{
				Text += "Bulk";
			}
		}
		public class RedHeadDuck : ADuck
		{

			public override void Display(TextBlock TextBlock)
			{
				base.Display(TextBlock);
			}

			public override void Quack()
			{
				Text += " Apchhi ";
			}

			public override void Swim()
			{
				Text += "Bulk2";
			}
		}
		public class RubberDuck : ADuck
		{

			public override void Display(TextBlock TextBlock)
			{
				base.Display(TextBlock);
			}

			public override void Fly()
			{
			}

			public override void Move()
			{
			}

			public override void Quack()
			{
				Text += " Humpfui ";
			}

			public override void Swim()
			{
				Text += "Bulk3";
			}
		}
		public class PinkDuck : ADuck
		{
			public override void Quack()
			{
				Text += " Chpunk ";
			}

			public override void Swim()
			{
				Text += "bulk4";
			}
			public override void Fly()
			{
			}

			public override void Display(TextBlock TextBlock)
			{
				base.Display(TextBlock);
			}
		}
		public class DecoyDuck : ADuck
		{
			public override void Display(TextBlock TextBlock)
			{
				base.Display(TextBlock);
			}

			public override void Fly()
			{
			}

			public override void Move()
			{
			}

			public override void Quack()
			{
				Text += " Fugubugu ";
			}

			public override void Swim()
			{
				Text += "bulk5";
			}
		}
		public class DamagedDuck : ADuck
		{
			public override void Display(TextBlock TextBlock)
			{
				base.Display(TextBlock);
			}

			public override void Fly()
			{
			}

			public override void Move()
			{
				base.Move();
			}

			public override void Quack()
			{
				Text += " BRAH ";
			}

			public override void Swim()
			{
				Text += "bulk5";
			}
		}
		public abstract class QuackBehaviour
		{
			public abstract void quackBehaviour();
		}
		public class LoudQuack : QuackBehaviour
		{
			public override void quackBehaviour()
			{
				System.Windows.MessageBox.Show("AAA");
			}
		}
		public class QuietQuack : QuackBehaviour
		{
			public override void quackBehaviour()
			{
				System.Windows.MessageBox.Show("aaa");
			}
		}
		public interface IFlyable
		{
			string Fly();
		}
		public class FlyWithWings : IFlyable
		{
			public string Fly()
			{
				return "\nFly wings";
			}
		}
		public class FlyNoWings : IFlyable
		{
			public string Fly()
			{
				return "\nHow?";
			}
		}
		public class FlyHard : IFlyable
		{
			public string Fly()
			{
				return "\nFufufuuf";
			}
		}
		public class AIDuck
		{
			public string Text { get; set; }
			public QuackBehaviour quackBehaviour { get; set; }
			public IFlyable Flyable { get; set; }
			public string Fly()
			{
				return Flyable.Fly();
			}
		}
		public Duck()
		{
			InitializeComponent();
			List<string> strings = new List<string>();
			List<ADuck> list = new List<ADuck>();
			list = GetInheritList<ADuck>().ToList();
			foreach (var obj in list)
			{
				strings.Add(obj.GetType().Name);
			}
			classes.ItemsSource = strings;
			var funcs = new List<IFlyable>();
			funcs = GetInterfaceImp<IFlyable>().ToList();
			List<string> strings1 = new List<string>();
			foreach (var obj in funcs)
			{
				strings1.Add(obj.GetType().Name);
			}
			quack.ItemsSource = strings1;
		}
		Type[] types;
		private IEnumerable<T> GetInheritList<T>() where T : class
		{
			List<T> list = new List<T>();
			types = Assembly.GetAssembly(typeof(T)).GetTypes().Where(p => p.IsClass && p.Name != "MainWindow" && !p.Name.Contains("<>") && p.Name != "App").ToArray();
			foreach (Type type in types.Where(mytype => !mytype.IsAbstract && mytype.IsSubclassOf(typeof(T))))
			{
				list.Add((T)Activator.CreateInstance(type));
			}
			return list;
		}
		private IEnumerable<T> GetInterfaceImp<T>()
		{
			List<T> values = new List<T>();
			var Mytype = typeof(T);
			var Itypes = types.Where(p => Mytype.IsAssignableFrom(p));
			foreach (var type in Itypes)
			{
				values.Add((T)Activator.CreateInstance(type));
			}
			return values;

		}
		private void duck_Set(string className, string funcName = "")
		{
			IFlyable flyable = null;
			switch (funcName)
			{
				case "FlyWithWings":
					flyable = new FlyWithWings();
					break;
				case "FlyNoWings":
					flyable = new FlyNoWings();
					break;
				case "FlyHard":
					flyable= new FlyHard();
					break;
				default:
					break;
			}
			switch (className)
			{
				case "MallardDuck":
					Display(new MallardDuck() { Flyable = flyable });
					break;
				case "RedHeadDuck":
					Display(new RedHeadDuck() { Flyable = flyable });
					break;
				case "RubberDuck":
					Display(new RubberDuck() { Flyable = flyable });
					break;
				case "PinkDuck":
					Display(new PinkDuck() { Flyable = flyable });
					break;
				case "DecoyDuck":
					Display(new DecoyDuck() { Flyable = flyable });
					break;
				case "DamagedDuck":
					Display(new DamagedDuck() { Flyable = flyable });
					break;
				default:
					break;
			}
		}
		private void Display(ADuck duck)
		{
			duck.Display(duckinst);
		}

		private void classes_DropDownClosed(object sender, EventArgs e)
		{
			var cmb = sender as ComboBox;
			cmb.Text = cmb.SelectedItem.ToString();

		}

		private void quack_DropDownClosed(object sender, EventArgs e)
		{
			if (classes.Text != string.Empty && quack.Text != string.Empty)
			{
				duck_Set(classes.Text, quack.Text);
			}
		}
	}
}
