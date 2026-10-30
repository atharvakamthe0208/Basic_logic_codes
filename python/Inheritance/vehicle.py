class vehicle:
    def accept(self):
        self.vno = int(input("Enter Vehicle No :"))
        self.vname = input("Enter Vehicle Name :")
        self.price = int(input("Enter Vehicle Price :"))

    def display(self):
        print("Vehicle No :", self.vno)
        print("Vehicle Name :", self.vname)
        print("Vehicle Price :", self.price)


class luxuryvehicle(vehicle):
    def indata(self):
        self.accept()
        self.special = input("Enter Luxury Special Feature :")

    def opdata(self):
        self.display()
        print("Luxury Special Feature :", self.special)


class moderatevehicle(vehicle):
    def getdata(self):
        self.accept()
        self.special = input("Enter Moderate Special Feature :")

    def putdata(self):
        self.display()
        print("Moderate Special Feature :", self.special)


class cheapvehicle(vehicle):
    def inputdata(self):
        self.accept()
        self.special = input("Enter Cheap Vehicle Special Feature :")

    def outputdata(self):
        self.display()
        print("Cheap Vehicle Special Feature :", self.special)


print("\n--- Luxury Vehicle ---")
v1 = luxuryvehicle()
v1.indata()
v1.opdata()

print("\n--- Moderate Vehicle ---")
v2 = moderatevehicle()
v2.getdata()
v2.putdata()

print("\n--- Cheap Vehicle ---")
v3 = cheapvehicle()
v3.inputdata()
v3.outputdata()