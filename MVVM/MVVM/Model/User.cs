using System;
using System.ComponentModel;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace MVVM.Model
{
	internal class User : INotifyPropertyChanged
	{
		private string name;
		private int id;
		private string country;
		private int age;
		private string secondName;
		private bool isMale;

		public bool IsMale
		{
			get { return isMale; }
			set 
			{ 
				isMale = value;
				OnPropertyChanged("IsMale");
			}
		}

		public string SecondName
		{
			get { return secondName; }
			set { secondName = value; OnPropertyChanged("SecondName"); }
		}

		public int Age
		{
			get { return age; }
			set { age = value; OnPropertyChanged("Age"); }
		}


		public string Country
		{
			get { return country; }
			set { country = value; OnPropertyChanged("Country"); }
		}


		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}

		public string Name
		{
			get { return name; }
			set { name = value; OnPropertyChanged("Name"); }
		}

		public event PropertyChangedEventHandler PropertyChanged;
		private void OnPropertyChanged(string propertyName)
		{
			if (PropertyChanged != null)
			{
				PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
			}
		}
	}
}
