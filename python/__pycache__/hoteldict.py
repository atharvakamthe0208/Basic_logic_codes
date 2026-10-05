starters = {
    "Paneer Tikka": 180,
    "Veg Manchurian": 150,
    "Spring Roll": 120
}

main_course = {
    "Paneer Butter Masala": 220,
    "Veg Biryani": 180,
    "Veg Fried Rice": 160,
    "Butter Naan": 40
}

desserts = {
    "Gulab Jamun": 80,
    "Ice Cream": 70,
    "Brownie": 100
}


order = []
a = 1

while a == 1:

    print("\n1. Starter")
    print("2. Main Course")
    print("3. Dessert")

    ch = input("Enter your choice: ")

    match ch:

        case "1":

            b = 1

            while b == 1:

                o = 1

                for i, v in starters.items():
                    print(o, i, v)
                    o += 1

                on = int(input("Enter your choice: "))

                order.append(["Starter", on])

                print("Order is placed")

                b = int(input("Do you want to continue? Press 1: "))


        case "2":

            b = 1

            while b == 1:

                o = 1

                for i, v in main_course.items():
                    print(o, i, v)
                    o += 1

                on = int(input("Enter your choice: "))

                order.append(["Main Course", on])

                print("Order is placed")

                b = int(input("Do you want to continue? Press 1: "))


        case "3":

            b = 1

            while b == 1:

                o = 1

                for i, v in desserts.items():
                    print(o, i, v)
                    o += 1

                on = int(input("Enter your choice: "))

                order.append(["Dessert", on])

                print("Order is placed")

                b = int(input("Do you want to continue? Press 1: "))


        case _:

            print("Invalid choice")

    a = int(input("\nDo you want to change menu? Press 1: "))