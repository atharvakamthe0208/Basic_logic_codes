
class demo:
    def accept(self):
        self.rno=int(input("Enter Roll no "))
        self.name=input("Enter Name :")
        self.m1=int(input("Enter m1:"))
        self.m2=int(input("Enter m2:"))
        self.m3=int(input("Enter m3:"))
    def show(self):

        print("===============================================")
        print("================STUDENT MARKLIST===============")
        print("Roll no :",self.rno)
        print("Name    :",self.name)
        print("Eng     :",self.m1)
        print("maths   :",self.m2)
        print("Science :",self.m3)
        print("Total :",self.tot)
        print("Average :",self.avg)
        print("Percentage :",self.per)

    def calculate(self):
        self.tot=self.m1+self.m2+self.m3
        self.avg=self.tot/3
        self.per=self.tot/300*100


d=demo()
d.accept()
d.calculate()
d.show()