import random

comscore = 0
myscore = 0

com = random.randint(1, 6)
print(f"Computer has number : {com}")
comscore = comscore+com
if comscore == myscore:
    myscore = 0
    print("Computer bit You!")


x = int(input("Press 1 to Dice : "))
if x == 1:
    my = random.randint(1, 6)
    print(f"You Have Number : {my}")
    myscore = myscore+my
    if myscore == comscore:
        comscore = 0
        print("You Bit Computer")
