n = int(input())
a = map(int, input().split())
list = list(a)
list.sort(reverse=True)

for i in list:
    print(i, end= ' ')