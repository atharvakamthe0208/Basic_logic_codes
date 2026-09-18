print("right angle printing using while loop ")
i=1
while i<=3:
    j=1
    while j<=i:
        print("*",end=" ")
        j+=1
    print()
    i+=1

print("right angle printing using for loop ")
for i in range(1,4):
    for j in range(i):
        print("*",end=" ")
    print()

for i in range(1,4):
    print("* "*i)