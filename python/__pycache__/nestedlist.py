x=[[1,2],[5,6]]
print(x)
print(x[1])
print(x[1][1])

#update
x[0][1]=4
print(x)

#add
x.append([101,102])
print(x)
print("=====================")
for i in x:
    print(i)

for i in x:
    print(i[0],i[1])

for i in x:
    for j in i:
        print(j)
print("=====================")

x=[101,"hi",True,[10,20],[30,40]]
for i in x:
    print(i)

for i in x:
    if type(i)==list:
        for j in i:
            print(j)
    else:
        print(i)