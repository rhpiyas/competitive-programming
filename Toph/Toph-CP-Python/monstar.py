N, P = map(int, input().split())
a = map(int, input().split())
list = list(a)

count = 0

for x in list:
    if x<P:
        count = count+1

print(count)