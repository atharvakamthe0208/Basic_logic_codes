class emp:
    def __init__(self,name,per):
        print("Hello constructor")
        self.name=name
        self.per=per

    def show(self):
        print("Hello Show ")
        print("Name is ",self.name)
        print("Perct is ",self.per)

e1=emp("Atharva",10.2)
e1.show()

e2=emp("niranjan",1.2)
e2.show()

del e1
del e2

