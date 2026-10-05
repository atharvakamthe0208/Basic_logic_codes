food = {
    "Starter": {
        1: {"Masala Papad": 100},
        2: {"Manchurian": 200},
        3: {"Spring Roll": 300}
    },

    "Veg": {
        1: {"Paneer Butter Masala": 250},
        2: {"Dum Aloo": 220},
        3: {"Veg Maratha": 280}
    },

    "Non-Veg": {
        1: {"Chicken Curry": 350},
        2: {"Chicken Biryani": 400},
        3: {"Mutton Curry": 500}
    },

    "Dessert": {
        1: {"Ice Cream": 100},
        2: {"Gulab Jamun": 80},
        3: {"Brownie": 150}
    }
}

total = 0
ch = 1

print("========== HOTEL MENU ==========")

while ch == 1:

    print("\n1. Starter")
    print("2. Veg")
    print("3. Non-Veg")
    print("4. Dessert")

    category_choice = int(input("Select Category: "))

    if category_choice == 1:
        category = "Starter"
    elif category_choice == 2:
        category = "Veg"
    elif category_choice == 3:
        category = "Non-Veg"
    elif category_choice == 4:
        category = "Dessert"
    else:
        print("Invalid Choice")
        continue

    print(f"\n---- {category} Menu ----")

    for item_no, item_dict in food[category].items():
        for item, price in item_dict.items():
            print(item_no, ".", item, "=", price)

    item_choice = int(input("Enter Item Number: "))

    if item_choice in food[category]:

        item_dict = food[category][item_choice]

        for item, price in item_dict.items():

            qty = int(input("Enter Quantity: "))

            amount = price * qty
            total += amount

            print("Item :", item)
            print("Price :", price)
            print("Quantity :", qty)
            print("Amount :", amount)

    else:
        print("Invalid Item")

    ch = int(input("\nDo you want to continue? (1-Yes / 0-No): "))

print("\n========== BILL ==========")
print("Total Bill =", total)
print("Thank You Visit Again!")