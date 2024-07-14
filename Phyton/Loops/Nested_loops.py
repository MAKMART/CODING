# nested loops =    The "inner loop" will finish all of it's iterations before
#                   finishing oneiteration of the "outer loop"

rows = int(input("How many rows?: "))
columns = int(input("How many columns?: "))
symbol = input("Enter a symbol to use: ")

for i in range(rows):
  for j in range(columns):
    print(symbol, end="")     #, end="" will prevent the cursor moving to a new line
  print()
