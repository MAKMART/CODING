# functions = a block of code which is executed only when it's called.

def hello(first_name, last_name, age):
  print("Hello " + first_name + " " + last_name)
  print("You are " + str(age) + " years old!")

my_name = "Marco"
hello(my_name, "Martin", 14)