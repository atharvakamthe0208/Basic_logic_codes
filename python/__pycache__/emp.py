class Employee:

    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    # Getter for name
    @property
    def name(self):
        return self.__name

    # Setter for name
    @name.setter
    def name(self, name):
        self.__name = name

    # Getter for age
    @property
    def age(self):
        return self.__age

    # Setter for age
    @age.setter
    def age(self, age):
        if age > 0:
            self.__age = age
        else:
            print("Age must be positive")


e1 = Employee("Rahul", 25)

# Access using getter
print("Name:", e1.name)
print("Age:", e1.age)

# Modify using setter
e1.name = "Amit"
e1.age = 30

print("Updated Name:", e1.name)
print("Updated Age:", e1.age)