N = int(input())
A = map(int, input().split())

x = list(A)

y = sorted(x)

if x == y:
    print("Yes")
else:
    print("No")