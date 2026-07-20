N = int(input())
A = map(int, input().split())
arr = list(A)
sum = 0
for i in range(N):
    sum = sum + arr[i]
    avg = sum/(i+1)
    print(f"{avg}")