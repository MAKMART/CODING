#variable = a container for value. Behaves as the value that it contains


#STRING
#for phyton it's common convention that when a variable has two words separate the two with a _
#first_name = "Marco"
#last_name = "Martin"
#full_name = first_name + " " + last_name

#print("Hello " + name)
#print(type(name))   #type function returns the variable type of something
#print("Hello " + full_name)



#INT
#age = 21
#age += 1    #age = age + 1
#print(age)
#print(type(age))
#print("You are: " + age)  DOESN'T WORK BECAUSE WE NEED TO CHANGE AGE TO STRING BECAUSE IT IS OF A DIFFERENT DATA TYPE
#print("Your age is: " + str(age))     #str function converts to a string data type (type casting)


#FLOAT
#height = 250.5
#print("You height is: " + str(height) + "cm")
#print(type(height))


#boolean
#human = True
#print("Are you a human: " + str(human))
#print(type(human))



# multiple asssignment = allows us to assign multiple variables at the same time in one line of code

# name = "Marco"
# age = 21
# attractive = True

name, age, attractive = "Marco", 21, True

print(name)
print(age)
print(attractive)



# Spongebob = 30
# Patrick = 30
# Sandy = 30
# Squidward = 30

Spongebob = Patrick = Sandy = Squidward = 30      #all of them = 30

print(Spongebob)
print(Patrick)
print(Sandy)
print(Squidward)
