
from Productinfo import Productinfo

lstprod = []

while True:
    print("\n1-create product")
    print("2-display products")
    print("3-search product")
    print("4-update product")
    print("5-delete product")
    print("6-exit")

    ch = input("Enter your choice: ")

    if ch == "1":
        new_products = Productinfo.create()
        lstprod.extend(new_products)

    elif ch == "2":
        Productinfo.display(lstprod)

    elif ch == "3":
        pno = int(input("Enter product number to search: "))
        Productinfo.searchdata(lstprod, pno)

    elif ch == "4":
        pno = int(input("Enter product number to update: "))
        Productinfo.updateproduct(lstprod, pno)

    elif ch == "5":
        pno = int(input("Enter product number to delete: "))
        Productinfo.deleteproduct(lstprod, pno)

    elif ch == "6":
        break

    else:
        print("Invalid choice.")

print("------------ THANK YOU ------------")
