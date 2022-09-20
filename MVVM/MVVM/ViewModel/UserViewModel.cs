using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using System.ComponentModel;
using MVVM.Model;
using System.Windows.Data;
using System.Globalization;
using System.Diagnostics;

namespace MVVM.ViewModel
{
	internal class UserViewModel
	{
		public IList<User> Users { get; set; }
		private ICommand updateCommand;
		private ICommand click;
		private string greet;
		private ICommand command;

		public ICommand Command1
		{
			get { if (command == null) command = new Greeting(
				(s) => { System.Windows.MessageBox.Show("Test");},
				(s) => { return true; }); return command; }
			set { command = value; }
		}

		public string Greet
		{
			get { return greet; }
			set { greet = value; }
		}

		public ICommand Click
		{
			get { if (click == null) click = new Greeting(Hello, Check) ;  return click; }
			set { click = value; }
		}

		private bool Check(object p)
		{
			return true;
		}

		private void Hello(object p)
		{
			System.Windows.MessageBox.Show("Hello, " + Convert.ToString(p) + "!");
		}

		public ICommand UpdateCommand
		{
			get { if (updateCommand == null) updateCommand = new Updater(); return updateCommand; }
			set { updateCommand = value; }
		}

		public UserViewModel()
		{
			Greet = "Greeting";
			Users = new List<User>()
			{
				new User() { Name = "Mike", SecondName = "Jordan", Age = 25, Country = "USA", Id = 1, IsMale = true },
				new User() { Name = "Nick", SecondName = "Jordan", Age = 25, Country = "USA", Id = 2, IsMale = true },
				new User() { Name = "Bob", SecondName = "Jordan", Age = 25, Country = "USA", Id = 3, IsMale = true },
				new User() { Name = "Rob", SecondName = "Jordan", Age = 25, Country = "USA", Id = 4, IsMale = true },
				new User() { Name = "Jhon", SecondName = "Jordan", Age = 25, Country = "USA", Id = 5, IsMale = true }
			};
		}

		
	}
	public class DummyConverter : IValueConverter
	{
		public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
		{
			Debugger.Break();
			return System.Convert.ChangeType(value, targetType, culture);
		}

		public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			return System.Convert.ChangeType((object)value, targetType, culture);
		}
	}

	internal class Greeting : ICommand
	{
		private readonly Predicate<object> _canExecute;
		private readonly Action<object> _execute;

		public Greeting(Action<object> execute, Predicate<object> canExecute)
		{
			_canExecute = canExecute;
			_execute = execute;
		}

		public event EventHandler CanExecuteChanged;

		public bool CanExecute(object parameter)
		{
			return _canExecute(parameter);
		}

		public void Execute(object parameter)
		{
			_execute(parameter);
		}
	}

	internal class Updater : ICommand
	{
		public event EventHandler CanExecuteChanged;

		public bool CanExecute(object parameter)
		{
			return true;
		}

		public void Execute(object parameter)
		{
		}
	}
}
