# slicing = create a substring by extracting elements from another string
#           indexing[] or slice()
#           [start:stop:step]


name = "Marco Martin"

first_name = name[:5]      #extracting the first name from the string name[start:end]  (end is exclusive) (start is inclusive)
#                            if you put nothing as the starting point it will be interpreted as 0, that is to say the start of the string
last_name = name[6:]#        if you put nothing as the ending point it will be interpreted as 0, that is to say the end of the string

funky_name = name[:12:3]   #extracting only every[::step] characters... Ex.(M..c..M..t..)


reversed_name = name[::-1]

#print(first_name)
#print(last_name)
#print(" ")
#print(name)
#print(" ")
#print(funky_name)
#print(" ")
#print(reversed_name)
#print(" ")
#print(name[::-1])


website1 = "http://google.com"
website2 = "http://youtube.com"

slice = slice(7,-4)   #slice object


print(website1[slice])     #print website with slice object applied to it
print(website2[slice])