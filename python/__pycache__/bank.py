class account:
    def __init__(self, accno, name, acctype, accbal):
        self.__accno = accno
        self.__name = name
        self.__acctype = acctype
        self.__accbal = accbal

    # Account number
    @property
    def accno(self):
        return self.__accno

    @accno.setter
    def accno(self, accno):
        self.__accno = accno

    # Customer name
    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, name):
        self.__name = name

    # Account type
    @property
    def acctype(self):
        return self.__acctype

    @acctype.setter
    def acctype(self, acctype):
        self.__acctype = acctype

    # Account balance
    @property
    def accbal(self):
        return self.__accbal

    @accbal.setter
    def accbal(self, accbal):
        self.__accbal = accbal


accounts = []

while True:
    print("\n1. Create Account")
    print("2. Display Accounts")
    print("3. Search Account")
    print("4. Transaction")
    print("5. Exit")

    ch = int(input("Enter your choice: "))

    # Create Account
    if ch == 1:
        while True:
            ano = int(input("Enter account number: "))

            # Check duplicate account number
            duplicate = False

            for a in accounts:
                if a.accno == ano:
                    duplicate = True
                    break

            if duplicate:
                print("Account number already exists!")
                continue

            cnm = input("Enter customer name: ")
            atype = input("Enter account type: ")
            abal = float(input("Enter opening balance (minimum 500): "))

            if abal < 500:
                print("Opening balance must be at least 500.")
                continue

            accobj = account(ano, cnm, atype, abal)
            accounts.append(accobj)

            print("Account created successfully!")

            c = input("Add another account? (1 for Yes): ")

            if c != "1":
                break

    # Display Accounts
    elif ch == 2:
        if not accounts:
            print("No accounts available.")

        else:
            for a in accounts:
                print("\nAccount Number:", a.accno)
                print("Customer Name:", a.name)
                print("Account Type:", a.acctype)
                print("Account Balance:", a.accbal)

    # Search Account
    elif ch == 3:
        ano = int(input("Enter account number to search: "))

        found = False

        for a in accounts:
            if a.accno == ano:
                print("\nAccount Number:", a.accno)
                print("Customer Name:", a.name)
                print("Account Type:", a.acctype)
                print("Account Balance:", a.accbal)

                found = True
                break

        if not found:
            print("Account not found.")

    # Transaction
    elif ch == 4:
        ano = int(input("Enter account number: "))

        found = False

        for a in accounts:
            if a.accno == ano:
                found = True

                print("\n1. Deposit")
                print("2. Withdraw")

                trans = int(input("Enter transaction type: "))
                amount = float(input("Enter amount: "))

                if amount <= 0:
                    print("Amount must be greater than zero.")

                # Deposit
                elif trans == 1:
                    a.accbal += amount

                    print("Amount deposited successfully.")
                    print("Updated Balance:", a.accbal)

                # Withdraw
                elif trans == 2:
                    if a.accbal < 500:
                        print("Cannot withdraw! Minimum balance of 500 required.")

                    elif amount <= a.accbal - 500:
                        a.accbal -= amount

                        print("Amount withdrawn successfully.")
                        print("Updated Balance:", a.accbal)

                    else:
                        print("Insufficient balance!")
                        print("Minimum balance of 500 must be maintained.")

                else:
                    print("Invalid transaction type.")

                break

        if not found:
            print("Account not found.")

    # Exit
    elif ch == 5:
        print("Thank you for using the Account Management System!")
        break

    else:
        print("Invalid choice. Please try again.")