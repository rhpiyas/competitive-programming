size = int (input())
for x in range(size):
    count = 0
    over = str(input())
    ov = list(over)

    for i in ov:
        if i in ['O', '0', '1', '2', '3', '4', '5', '6']:
            count = count+1

    if count<6:
        print(f"{count} BALLS")
    elif count%6==0:
        print(f"{count//6} OVER")
    else:
        print(f"{count//6} OVER {count%6} BALL")