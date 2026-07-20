T = int(input())

for i in range(T):
	X ,Y = map(int, input().split())
	sum = X+Y
	if sum%2==0:
		print("Sadia will be happy.")
	else:
		print("Oops!")