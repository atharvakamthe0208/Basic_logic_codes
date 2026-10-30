class book:
    def accept(self):
        self.bno = int(input("Enter Book No :"))
        self.bname = input("Enter Book Name :")
        self.price = int(input("Enter Book Price :"))

    def display(self):
        print("Book No :", self.bno)
        print("Book Name :", self.bname)
        print("Book Price :", self.price)


class comicbook(book):
    def indata(self):
        self.accept()
        self.special = input("Enter Comic Special Feature :")

    def opdata(self):
        self.display()
        print("Comic Special Feature :", self.special)


class fictionalbook(book):
    def getdata(self):
        self.accept()
        self.special = input("Enter Fictional Special Feature :")

    def putdata(self):
        self.display()
        print("Fictional Special Feature :", self.special)


class horrorbook(book):
    def inputdata(self):
        self.accept()
        self.special = input("Enter Horror Special Feature :")

    def outputdata(self):
        self.display()
        print("Horror Special Feature :", self.special)


print("\n--- Comic Book ---")
b1 = comicbook()
b1.indata()
b1.opdata()

print("\n--- Fictional Book ---")
b2 = fictionalbook()
b2.getdata()
b2.putdata()

print("\n--- Horror Book ---")
b3 = horrorbook()
b3.inputdata()
b3.outputdata()