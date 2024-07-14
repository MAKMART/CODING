# logical operators (and, or, not) = used to check if two or more conditional statements are true

temp = float(input("What is the temperature outside today?: "))

if not(temp >= 0 and temp <= 30):          #both conditions MUST be true
  print("The temperature is bad today!")
  print("Stay inside!")
elif not(temp < 0 or temp > 30):           #only one HAS to be true
  print("The temperature is good today!")
  print("Go outside!")