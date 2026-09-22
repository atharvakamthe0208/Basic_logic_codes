x=[23,56,78,2,1]
cnt=0
sum=0
for i in x:
    cnt+=1
    sum+=i
print("Length =",cnt)
print("sum",sum)
min=x[0]
for i in x:
    if i<min:
        min=i
print("Minimum numbers :",min)

max=0
for i in x:
    if i>max:
        max=i

print("Maximum numbers :",max)    
even=[]
odd=[]
evsum=0
odsum=0
for i in x:
    if i%2==0:
        even+=[i]
        evsum+=i

    else :
        odd+=[i]
        odsum+=i

print("Even numbers :",even,"\nsum of even numbers :",evsum)
print("Odd numbers :",odd,"\nsum of odd numbers :",odsum)

