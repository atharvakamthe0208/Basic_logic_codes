class employee:

    def accept(self):
        self.eid = int(input("Enter Employee ID : "))
        self.pname = input("Enter Employee Name : ")
        self.sal = int(input("Enter Salary : "))
        

    def calculate(self):
        self.hra=self.sal*0.09
        self.ta=self.sal*0.08
        self.ma=self.sal*0.07
        self.tot=self.hra+self.ma+self.ta

    def show(self):
        print("============PRODUCT BILL=============")
        print("   Employee ID   : ", self.eid)
        print("   Employee Name : ", self.pname)
        print("   Salary        : ",self.sal)
        print("   HRA        : ",self.hra)
        print("   TA        : ",self.ta)
        print("   MA        : ",self.ma)
        print("   Total        : ",self.tot)
        print("======================================")


empdict= {}

while True:

    e1=employee()

    e1.accept()
    e1.calculate()

    empdict[e1.eid]=e1

    

    c = int(input("Do you want to continue? Press 1 for Yes : "))

    if c != 1:
        break

eid =int(input("Enter Employee id to Search :"))
if eid in empdict:
    empdict[eid].show()
else:
    print("Employee not found")

