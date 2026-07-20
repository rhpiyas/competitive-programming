N = int(input())
friend = 0
for i in range(1, N):
    if N%i == 0:
        friend = friend+1

print(friend)