name = str(input())

up = 0
low = 0
num = 0
count = 0

for i in name:
    if i.isupper():
        up = up+1
    if i.islower():
        low = low+1
    if i.isdigit():
        num = num+1
    
    if up >= 1 and low >= 1 and num >= 1:
        count += 1
        up = 0
        low = 0
        num = 0

print(count)