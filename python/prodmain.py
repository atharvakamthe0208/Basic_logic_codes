from product import Product
products = []

def create():
    pass
def display():
    pass
def search():
    pass
def update():
    pass 
def delete():
    pass 

while True:
    print("\n1. Create Product")
    print("2. Display Products")
    print("3. Search Product")
    print("4. Update Stock")
    print("5. Exit")

    ch = int(input("Enter your choice: "))

    # Create Product
    if ch == 1:
        while True:
            product_id = int(input("Enter product ID: "))

            # Check for duplicate product ID
            duplicate = False

            for p in products:
                if p.product_id == product_id:
                    duplicate = True
                    break

            if duplicate:
                print("Product ID already exists!")
                continue

            name = input("Enter product name: ")
            category = input("Enter product category: ")
            price = float(input("Enter product price: "))
            quantity = int(input("Enter opening quantity: "))

            if price <= 0:
                print("Price must be greater than zero.")
                continue

            if quantity < 0:
                print("Quantity cannot be negative.")
                continue

            
            product_obj = Product(product_id, name, category, price, quantity)
            products.append(product_obj)

            print("Product created successfully!")
   
            print("Product created successfully!")

            c = input("Add another product? (1 for Yes): ")

            if c != "1":
                break

    # Display Products
    elif ch == 2:
        if not products:
            print("No products available.")
        else:
            for p in products:
                print("\nProduct ID:", p.product_id)
                print("Product Name:", p.name)
                print("Category:", p.category)
                print("Price:", p.price)
                print("Quantity:", p.quantity)

    # Search Product
    elif ch == 3:
        product_id = int(input("Enter product ID to search: "))

        found = False

        for p in products:
            if p.product_id == product_id:
                print("\nProduct ID:", p.product_id)
                print("Product Name:", p.name)
                print("Category:", p.category)
                print("Price:", p.price)
                print("Quantity:", p.quantity)

                found = True
                break

        if not found:
            print("Product not found.")

    # Update Stock
    elif ch == 4:
        product_id = int(input("Enter product ID: "))

        found = False

        for p in products:
            if p.product_id == product_id:
                found = True

                print("\n1. Add Stock")
                print("2. Sell Product")

                trans = int(input("Enter transaction type: "))
                amount = int(input("Enter quantity: "))

                if amount <= 0:
                    print("Quantity must be greater than zero.")

                # Add stock
                elif trans == 1:
                    p.quantity += amount

                    print("Stock added successfully.")
                    print("Updated Quantity:", p.quantity)

                # Sell product
                elif trans == 2:
                    if amount <= p.quantity:
                        p.quantity -= amount

                        print("Product sold successfully.")
                        print("Updated Quantity:", p.quantity)
                    else:
                        print("Insufficient stock!")

                else:
                    print("Invalid transaction type.")

                break

        if not found:
            print("Product not found.")

    # Exit
    elif ch == 5:
        print("Thank you for using the Product Management System!")
        break

    else:
        print("Invalid choice. Please try again.")