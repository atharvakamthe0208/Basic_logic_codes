x=[]
print(x,type(x))

x=[10,20,30,40]
print(x)

x[2]=300
print(x)

for i in x:
    print(i)


#inbuilt function
x=[3,6,2,1]
print("Length of x :",len(x))
print("minimum of x:",min(x))
print("maximum of x:",max(x))
print("sum of x:",sum(x))

print("sorted x :",sorted(x))
print("sorted x in reverse order :",sorted(x,reverse=True))

#methods -->refvar.methodname()
x=[20,30]
#add elements into list 
x.append(10)#adds element at the last position of the list 
x.insert(0,40)#add element at the specified location 

#remove element from list 
x.pop()#removes the element at the last of the list 
print(x)
x.remove(20)#removes the specific element 
print(x)
x.clear()#deletes all the element 
print(x)

x=[23,1,203,34,95,13]
x.sort()
print("Sorted elements of x : ",x)
y=x.copy()
print("Elements in Y :",y)

x.extend([90,80])
print(x)#[1, 13, 23, 34, 95, 203, 90, 80]
print(x.index(203))

x.reverse()
print("Reverse order of the list x :",x)

#user input in list 
z=[]
ip=int(input("Enter no of elements :"))
for i in range(ip):
    no=int (input("Enter the no :"))
    z.append(no)
print("elements of the user :",z)

a=[]
ip1=int(input("Enter no of elements :"))
for i in range(ip1):
    no=int (input("Enter the no :"))
    a+=[no]

print(a)