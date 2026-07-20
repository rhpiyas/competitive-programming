import random

num = random.randint(1, 10)
com = num%2
y = int(input("Enter a Number : "))
y2 = y%2

if com == y2:
    print("You Won")
else:
    print("You Loss")