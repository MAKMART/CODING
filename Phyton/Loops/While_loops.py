# while loops = a statement that will execute it's block of code, 
#               as long as it's condition remains true

name = None

while not name:                           #or while  len(name) == 0
  name = input("Enter your name: ")
print("Hello " + name)