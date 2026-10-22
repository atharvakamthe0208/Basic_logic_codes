class acc:
    def accept(self):
        self.accno=int(input("Enter Account no :"))
        self.Cname=input("Enter Customer Name :")
        self.accbal=int(input("Enter Account Balance :"))

    def display(self):
        print("Account no :",self.accno)
        print("Account Holder Name :",self.Cname)
        print("Account Balance :",self.accbal)

class savingacc(acc):
    def indata(self):
        self.accept()
        self.intrest=int(input("Enter Intrest Rate :"))

    def opdata(self):
        self.display()
        print("Interst :",self.intrest)

class currentacc(acc):
    def getdata(self):
        self.accept()
        self.companyname=input("Enter company Name :")

    def putdata(self):
        self.display()
        print("Company name :",self.companyname)

s1=savingacc()
s1.indata()
s1.opdata()

c1=currentacc()
c1.getdata()
c1.putdata()