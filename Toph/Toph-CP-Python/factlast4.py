N = int(input())
fact = 1
for i in range(1, N+1):
    fact = (fact*i) % 10000

print(fact)