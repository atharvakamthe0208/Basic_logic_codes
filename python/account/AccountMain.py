from Accountinfo import *
from Account import Account
from Transaction import Transaction

'''
print("hello")
a1=Accountinfo.create()
print("test")
Accountinfo.display(a1)
print("thank you")

print(a1)

'''

lstacc=[]

while True:
    print('1-create account\n2-display account\n3-search account\n4-update account\n5-delete account\n6-Depositc\n7-Withdraw\n8-Exit')
    ch=int(input('enter your choice'))

    if ch==1:
        lstacc=Accountinfo.create()
        print(' account created......')

    elif ch==2:

        Accountinfo.display(lstacc)
    elif ch==3:
        s=int(input('enter number to search in list'))
        Accountinfo.searchdata(lstacc,s)

    elif ch==4:
        ano = int(input("Enter account number to update: "))
        newbal = int(input("Enter new account balance: "))
        Accountinfo.updateaccount(lstacc, ano, newbal)

    elif ch==5:
        ano = int(input("Enter account number to delete: "))
        Accountinfo.deleteaccount(lstacc, ano)

    elif ch==6:
        ano = int(input("Enter account number: "))
        amount = int(input("Enter deposit amount: Rs. "))
        Transaction.deposit(lstacc, ano, amount)

    elif ch==7:
        ano = int(input("Enter account number: "))
        amount = int(input("Enter withdrawal amount: Rs. "))
        Transaction.withdraw(lstacc, ano, amount)

    elif ch==8:
        break

    else:
        print("Invalid")
    
    ct=int(input('do you want to continue press 1'))
    if ct!=1:
        break

print('------------THANK YOU----------------------')