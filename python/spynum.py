num=int(input("Enter any Number :"))
sum=0
pro=1
while num>0:
    rem=num%10
    pro=pro*rem
    sum+=rem
    num//=10
print(sum)
print(pro)
if sum==pro:
    print("The Number is SPY")
else :
    print("The Number is not SPY")