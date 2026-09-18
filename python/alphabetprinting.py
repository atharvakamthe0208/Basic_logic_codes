i=1
n=4
asi=97
while i<=3:
    j=1
    while j<=i:
        print(chr(asi),end=" ")
        asi+=1
        j+=1
    print()
    i+=1


asi=97
for i in range(1,4):
    for j in range(i):
        print(chr(asi),end=" ")
        asi+=1
    print()

n=4
i=1
while i<=n:
    k=1
    while k<=n-i:
        print(" ",end="")
        k+=1
    j=1
    while j<=i:
        print("*",end=" ")
        j+=1
    print()
    i+=1

for i in range(1,n+2):
    for k in range(1,(n-i)+1):
        print(" ",end="")
    for j in range(1,i+1):
        print("*",end=" ")
    print()

