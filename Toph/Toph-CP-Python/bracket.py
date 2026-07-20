x = input()
count = 0
flag = 0
for i in x:
    if i == '(':
        count=count+1
    elif i ==')':
        count = count-1
        if count<0:
            flag = 1
            break
    
    
    

if count == 0 and flag == 0:
    print("Yes")
else:
    print("No")