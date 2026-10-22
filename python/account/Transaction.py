
class Transaction:

    
    def deposit(lstacc, accno, amount):
        for a1 in lstacc:
            if a1.accno == accno:
                if amount <= 0:
                    print("Deposit amount must be greater than zero.")
                    return

                a1.accbal = a1.accbal + amount

                print("Amount deposited successfully.")
                print("Account Number:", a1.accno)
                print("Customer Name:", a1.cname)
                print("Deposited Amount: Rs.", amount)
                print("Available Balance: Rs.", a1.accbal)
                return

        print("Account not found.")

    
    def withdraw(lstacc, accno, amount):
        for a1 in lstacc:
            if a1.accno == accno:
                if amount <= 0:
                    print("Withdrawal amount must be greater than zero.")
                    return

                if a1.accbal - amount < 1000:
                    print("Insufficient balance.")
                    print("Minimum balance of Rs. 1000 must remain in the account.")
                    print("Available Balance: Rs.", a1.accbal)
                    return

                a1.accbal = a1.accbal - amount

                print("Amount withdrawn successfully.")
                print("Account Number:", a1.accno)
                print("Customer Name:", a1.cname)
                print("Withdrawn Amount: Rs.", amount)
                print("Available Balance: Rs.", a1.accbal)
                return

        print("Account not found.")
