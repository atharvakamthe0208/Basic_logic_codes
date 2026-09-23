n=int(input("Enter how many list :"))
mainlist=[]
for i in range(n):
    sublist=[]
    m=int(input("Enter how many elemnets in the list :"))
    for i in range(m):
        val=int(input(f"enter element {i+1} :"))
        sublist.append(val)
    print("Sub List :",sublist)
    mainlist.append(sublist)

print("Main List :",mainlist)
