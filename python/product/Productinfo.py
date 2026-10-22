
from Product import Product


class Productinfo:

    
    def create():
        lstprod = []

        while True:
            pno = int(input("Enter product number: "))
            pname = input("Enter product name: ")
            price = float(input("Enter product price: Rs. "))
            quantity = int(input("Enter product quantity: "))

            if price < 0 or quantity < 0:
                print("Price and quantity cannot be negative.")
                continue

            lstprod.append(Product(pno, pname, price, quantity))
            print("Product added successfully.")

            ch = input("Add another product? Press 1 for yes: ")

            if ch != "1":
                break

        return lstprod

    
    def display(lstprod):
        if len(lstprod) == 0:
            print("No products available.")
            return

        print("\n-------- PRODUCT DETAILS --------")

        for p1 in lstprod:
            print("--------------------------------")
            print("Product number:", p1.pno)
            print("Product name:", p1.pname)
            print("Product price: Rs.", p1.price)
            print("Product quantity:", p1.quantity)

    
    def searchdata(lstprod, searchno):
        for p1 in lstprod:
            if p1.pno == searchno:
                print("--------------------------------")
                print("Product number:", p1.pno)
                print("Product name:", p1.pname)
                print("Product price: Rs.", p1.price)
                print("Product quantity:", p1.quantity)
                return

        print("Product not found.")

    
    def updateproduct(lstprod, searchno):
        for p1 in lstprod:
            if p1.pno == searchno:
                pname = input("Enter new product name: ")
                price = float(input("Enter new product price: Rs. "))
                quantity = int(input("Enter new product quantity: "))

                if price < 0 or quantity < 0:
                    print("Price and quantity cannot be negative.")
                    return

                p1.pname = pname
                p1.price = price
                p1.quantity = quantity

                print("Product updated successfully.")
                return

        print("Product not found.")

   
    def deleteproduct(lstprod, searchno):
        for p1 in lstprod:
            if p1.pno == searchno:
                lstprod.remove(p1)
                print("Product deleted successfully.")
                return

        print("Product not found.")
