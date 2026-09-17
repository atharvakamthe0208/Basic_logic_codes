no=int(input("Enter any number:"))
tem=no
rem=0
sum=0
tot=0
while no>0:
    rem=no%10
    no//=10
    fact=1
    while rem>0:
        fact=fact*rem
        rem-=1
    tot+=fact
if(tot==tem):
    print(tem,"is the strong no ")
else:
    print(tem,"is not strong no ")