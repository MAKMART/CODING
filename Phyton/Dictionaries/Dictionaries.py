# dictionary = A changeable, unordered collection of unique key:value pairs
#              Fast because they use hashing, allow us to access a value quickly

capitals = {"USA":"Washington DC", "India":"New Dehli", "China":"Beijing", "Russia":"Moscow"}   #key:value associated (NO NEED TO BE THE SAME DATA TYPE)
#To access the value (Ex."New Dehli") we need to use the associated key ("India")

capitals.update({"Germany":"Berlin"}) #.update({key:value})   adds a new pair in the dictionary
capitals.update({"USA":"Las Vegas"})  #ALSO CAN UPDATE ALREADY EXISTING VALUES
capitals.pop("China")                 #.pop(key)              removes a pair
#capitals.clear()                     #.clear()               removes all the pairs in the dictionary
#print(capitals["Germany"])
#print(capitals.get("Germany"))       #.get(key)              gets the associated value if present, this method is safer than dictionary[key]
#print(capitals.keys())               #.keys()                gets all the keys in the dictionary
#print(capitals.values())             #.values()              gets all the values in the dictionary
#print(capitals.items())              #.items()               gets everithing in the dictionary

for key, value in capitals.items():
  print(key, value)