from account import account
class accountinfo:
    def create():
        print("Account created ")
        a1=account(101,"rahul",5000)
        return a1

    def display(a1):
        print("Account display")
        print(a1.accno)
        print(a1.cname)
        print(a1.accbal)