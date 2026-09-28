
# emp=[[1,"ram",1000,18],
#      [2,"sita",2000,17],
#      [3,"gopi",500,21],
#      [4,"geeta",7000,23],
#      [5,"sonu",800,15]]
# print("ID       NAME   SALARY   AGE")
# for i in emp:
#     print(i[0],"\t", i[1],"\t", i[2],"\t",i[3])

# print("")
# totalsal=0
# for i in emp:
#     totalsal+=i[2]

# print("Total salary :",totalsal)
# print("")
# print("Employee having Age greater than 18 :")
# for i in emp:
#     if(i[3]>=18):
    
#         print(i[0],"\t", i[1],"\t", i[2],"\t",i[3])

# print("")
# print("Employee Salary in between 800 and 7000 :")
# for i in emp:
#     if i[2]>800 and i[2]<7000:
#         print(i[0],"\t", i[1],"\t", i[2],"\t",i[3])

lis=[[10,20,30],
     [40,50,60],
     [70,80,90]]
n=int(input("Enter any number :"))
flag=0
num=[]
for i in lis:
    for j in i:
        if(j==n):
            flag=1
            num=j
            break
        
        
    
if(flag==1):
    print("Number found ",num)
else:
    print("Number not found  ")