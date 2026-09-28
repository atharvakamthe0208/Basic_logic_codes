o=0
listmenu=['a','b','c']
listprice=[100,200,300]


b=1
order=[]
while b==1:
    j=0
    o=0
    for i in listmenu:
        print((o+1),"   ",i,"   ",listprice[j])
        j+=1
        o+=1
    print("================================================")
    print("")
    on=int(input("Enter order number :"))
    order.append(on)
    print("One order placed ")

    b=int(input("Do you want to order again pree 1 "))

print("your order is ")
total=0
for k in order:
    print(listmenu[k-1]," ",listprice[k-1])
    total+=listprice[k-1]
print("Total bill : ",total)
