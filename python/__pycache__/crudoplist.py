stud = [
    [1, "ram", 23],
    [2, "om", 24],
    [3, "shyam", 25]
]

# View Students
print("ID  NAME   AGE")

for i in stud:
    print(i[0], i[1], i[2])

# Total Age
sum = 0

for i in stud:
    print("Only Age", i[2])
    sum += i[2]

print("Total Age :", sum)

# Youngest Student
younger = stud[0][2]
name = stud[0][1]

for i in stud:
    if i[2] < younger:
        younger = i[2]
        name = i[1]

print("Youngest One is", name, younger)

# Oldest Student
older = stud[0][2]
name = stud[0][1]

for i in stud:
    if i[2] > older:
        older = i[2]
        name = i[1]

print("Oldest One is", name, older)