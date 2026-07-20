N = int(input())

if N<=1:
    print("No")
else:
    for i in range(2, N):
        if N%i == 0:
            print("NO")
            break

    else:
            print("YES")