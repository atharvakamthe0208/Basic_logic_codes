
rem=0
sum=0
no=int(input("Enter any number :"))
tem=no
while no>0:
    rem=no%10
    sum+=rem
    no//=10

if(tem%sum==0):
    print("The no is neon number")
else :
    print("the no is not neon number ")
   

