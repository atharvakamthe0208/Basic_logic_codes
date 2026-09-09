n=int(input("Enter any number "))
i=1
sum=0
while i<n:
    if n%i==0:
        print(i)
        sum+=i
    i+=1

if sum==n:
    print("The number is perfect")
else :
    print("The number is not perfect")