class employee:
    def accept(self):
        self.empid=int(input("Enter Employee ID :"))
        self.ename=input("Enter Employee Name :")
        self.salary=input("Enter Salary :")

    def display(self):
        print("Employee ID     :",self.empid)
        print("Employeee Name  :",self.ename)
        print("Employee Salary :",self.salary)

class manager(employee):

    def getdata(self):
        self.accept()
        self.bonus=int(input("Enter Bonus Amount "))

    def putdata(self):
        self.display()
        print("Employee Bonus :",self.bonus)

class developer(employee):
    def inputdata(self):
        self.accept()
        self.noofhr=int(input("Enter Number of hrs :"))

    def displaydata(self):
        self.display()
        print("Developer no of work hours :",self.noofhr)

m1=manager()
m1.getdata()
m1.putdata()
d1=developer()
d1.inputdata()
d1.displaydata()