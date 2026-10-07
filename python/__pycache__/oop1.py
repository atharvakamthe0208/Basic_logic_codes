
class demo:
    def accept(self):
        self.rno=int(input("Enter Roll no "))
        self.name=input("Enter Name :")
    def show(self):
        print("Hello")
        print("Roll no :",self.rno)
        print("Name :",self.name)

d=demo()
d.accept()
d.show()