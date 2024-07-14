# tuplets = collection which is ordered and unchangeable
#           used to group together related data

student = ("Marco", 14, "male")

print(str(student.count("Marco")) + " ", end="")       #.count() counts how many times a value appears in the tuple
print(student.index("male"))        #.index() returns the index of the set value

for x in student:
  print(x)

if "Marco" in student:
  print("Marco is here!")