N = int(input())
p = list(map(int, input().split()))
s = list(map(int, input().split()))

list = []
for i in range(N):
    list.append(p[i]*s[i])

list.sort()
list.reverse()

for i in list:
    print(i, end=' ')

