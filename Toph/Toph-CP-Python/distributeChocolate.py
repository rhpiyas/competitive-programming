X, Y, = map(int, input().split())

if Y%X==0:
    print(0)
else:
    ex = Y%X
    buy = X - ex
    print(buy)