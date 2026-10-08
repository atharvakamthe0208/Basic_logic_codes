class product:

    def accept(self):
        self.pid = int(input("Enter Product ID : "))
        self.pname = input("Enter Product Name : ")
        self.price = int(input("Enter Product Price : "))
        self.qty = int(input("Enter Product Quantity : "))

    def calculate(self):
        self.total = self.price * self.qty
        self.cgst = self.total * 6 / 100
        self.sgst = self.total * 6 / 100
        self.finaltotal = self.total + self.cgst + self.sgst

    def show(self):
        print("============PRODUCT BILL=============")
        print("   Product ID    : ", self.pid)
        print("   Product Name  : ", self.pname)
        print("   Price         : ", self.price)
        print("   Quantity      : ", self.qty)
        print("   Total         : ", self.total)
        print("   CGST (6%)     : ", self.cgst)
        print("   SGST (6%)     : ", self.sgst)
        print("   Final Total   : ", self.finaltotal)
        print("======================================")


lstproduct = []

while True:

    p1 = product()

    p1.accept()
    p1.calculate()

    lstproduct.append(p1)

    c = int(input("Do you want to continue? Press 1 for Yes : "))

    if c != 1:
        break


for p in lstproduct:
    p.show()