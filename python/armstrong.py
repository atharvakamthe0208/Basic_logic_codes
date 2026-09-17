no=int(input("Enter any number :"))
sum=0
temp=no
cnt=0
while no>0:
    cnt+=1
    no//=10
rem=0
no=temp
while no>0:
    rem=no%10
    sum += rem ** cnt
    no//=10

if temp==sum:
    print("the number is armstrong number")
else:
    print("the number is not armstrong number")