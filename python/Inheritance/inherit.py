class a:#parent class /super class / base class
    def hello(self):
        print("Hello from A")

class b(a):#Derived class / child class/
    def welcome(self):
        print("Welocome from B")

b1=b()
b1.welcome()
b1.hello()