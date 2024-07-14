# Lists = used to store multiple items in a single variable


food = ["pizza", "hamburger", "hot dog", "spaghetti", "pudding"]

food[0] = "sushi"

#print(food[0])

#FUNCTIONS:

food.append("ice cream")          #.append()        adds an element to the end of the list
food.remove("hot dog")            #.remove()        removes an element
food.pop()                        #.pop()           removes the last element in the list
food.insert(0, "cake")            #.insert()        inserts an onject at a given index
food.sort()                       #.sort()          sorts the list by alphabetical value
#food.clear()                      #.clear()         will clear all the elments in the list


for i in food:
  print(i)