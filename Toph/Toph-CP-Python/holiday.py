N = int(input())
a = map(int, input().split())

list = list(a)

for i in list:
    if i == 0:
        print(f"{list.index(0)+1}")
        break
else:
        print("SAD")