name = "marco martin"

print(len(name))              #len()              gets the lenght of the string
print(name.find("m"))         #.find()            will find the position of a specified character in the string
print(name.capitalize())      #.capitalize()      will capitalize the first letter of the string
print(name.upper())           #.upper()           will make all the string uppercase
print(name.lower())           #.lower()           will make the whole string lowercase
print(name.isdigit())         #.isdigit()         will return true whenever the string has any digits in it
print(name.isalpha())         #.isalpha()         will return wether the string has ONLY characters in the alphabeth   #in this case is false cuz there's a space
print(name.count("m"))        #.count()           will return how many given characters a string has
print(name.replace("m", "p")) #.replace()         will replace a given character with another given character

#!USEFUL FEATURE!#
print(name * 3)     # string * n     will print() the string n times