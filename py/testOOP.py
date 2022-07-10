import datetime

class Dog:
	def __init__(self, name, age) -> None:
		self.name = name
		self.age = age
	def Walk(self):
		i = 0
		print("Walk started")
		while i < 2000000000:
			i = i + 1
		print("Walk ended")
         
my_dog = Dog("Jack", 5)
my_dog.Walk()
print(my_dog.name + " " + str(my_dog.age))