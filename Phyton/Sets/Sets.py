# set = a collection wich is unordered, unindexed. No duplicate values

utensils = {"fork", "spoon", "knife"}
dishes = {"bowl", "plate", "cup", "knife"}

#USEFUL METHODS:
utensils.add("napkin")                    #.add()               adds an element to a set
utensils.remove("fork")                   #.remove()            removes an element in a set
#utensils.clear()                         #.clear()             clears all the elements in a set
utensils.update(dishes)                   #.update()            adds a set to one another

dinner_table = utensils.union(dishes)     #.union()             unifies two sets in another set

#print(utensils.difference(dishes))        #.difference()       returns anything than one set has that the other one doesn't
print(utensils.intersection(dishes))       #.intersection()     returns whatever the two sets have in common

#for z in dinner_table:
  #print(z)          # when printing the elements might not be in order cuz a set is unordered
