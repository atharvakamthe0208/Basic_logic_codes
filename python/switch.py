choice = int(input("Enter choice between (1-7)"))

match choice:
    case 1 | 2 | 3 | 4 | 5:
        print("weekday")
    case 6 | 7:
        print("weekend")
    case _:
        print("invalid choice")