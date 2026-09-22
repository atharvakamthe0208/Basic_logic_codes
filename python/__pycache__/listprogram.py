x=[90,25,34,56]
a=int(input("Enter the key to search :"))
cnt=-1
flag=False
for i in x:
    cnt+=1
    if i==a:
        print("Key found at location ",cnt)
        flag=True
        break

if not flag:
    print("key not found")

list_sq=[]
for i in range(len(x)):
    if i%2!=0:
        sq=x[i]*x[i]
        list_sq+=[sq]
print(list_sq)

num=0
for i in list_sq:
    if i%5==0:
        num+=i

print(num)

sum=0
rem=0
while num>0:
    rem=num%10
    sum+=rem
    num//=10

print(sum)