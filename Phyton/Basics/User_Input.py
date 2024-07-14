#     input(Test to put as output to know what to put in) will ask for something in input

name = input("Metti il tuo nome: ")     #input() function will accept some user input ALWAYS AS A STRING
age = int(input("How old are you: "))   #int() to cast the input as an integer
height = float(input("How tall are you: "))

print("Ti chiami " + name)
print("Hai " + str(age) + " anni")
print("Sei " + str(height) + " cm alto")