# stud = [
#     [1, "ram", 23],
#     [2, "om", 24],
#     [3, "shyam", 25]
# ]

# # View Students
# print("ID  NAME   AGE")

# for i in stud:
#     print(i[0], i[1], i[2])

# # Total Age
# sum = 0

# for i in stud:
#     print("Only Age", i[2])
#     sum += i[2]

# print("Total Age :", sum)

# # Youngest Student
# younger = stud[0][2]
# name = stud[0][1]

# for i in stud:
#     if i[2] < younger:
#         younger = i[2]
#         name = i[1]

# print("Youngest One is", name, younger)

# # Oldest Student
# older = stud[0][2]
# name = stud[0][1]

# for i in stud:
#     if i[2] > older:
#         older = i[2]
#         name = i[1]

# print("Oldest One is", name, older)

emp=[[1,"ram",1000,18],
     [2,"sita",2000,17],
     [3,"gopi",500,21],
     [4,"geeta",7000,23],
     [5,"sonu",800,15]]
print("ID       NAME   SALARY   AGE")
for i in emp:
    print(i[0],"\t", i[1],"\t", i[2],"\t",i[3])

print("")
totalsal=0
for i in emp:
    totalsal+=i[2]

print("Total salary :",totalsal)
print("")
print("Employee having Age greater than 18 :")
for i in emp:
    if(i[3]>=18):
    
        print(i[0],"\t", i[1],"\t", i[2],"\t",i[3])

print("")
print("Employee Salary in between 800 and 7000 :")
for i in emp:
    if i[2]>800 and i[2]<7000:
        print(i[0],"\t", i[1],"\t", i[2],"\t",i[3])
