for i in range(1,6):
    print(i)

print("Odd numbers :")
for i in range(0,10,2):
    print(i)

print("Even numbers :")
for i in range(2,10,2):
    print(i)

sum=0
for i in  range(11,36,1):
    if i%5==0:
        sum=sum+i

print("Sum :",sum)