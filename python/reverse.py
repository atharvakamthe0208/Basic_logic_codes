#reverse the number 
num=123
rev=0
while num>0:
    rem=num%10
    rev=rev*10+rem
    num//=10
print("Reverse of the number : ",rev)

