N = int(input())
D = map(int, input().split())
V = map(int, input().split())

listD = list(D)
listV = list(V)
new = []

for x in range(N):
    if listV[x] == 0:
        new.append(listD[x])

new.sort()

for x in new:
    print(x, end=' ')