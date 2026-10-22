from Account import Account

class Accountinfo:

    def create():

        print("account created")
        lstacc=[]
        while True:
                
            ano=int(input('enter account number'))
            cname=input('enter customer name')
            accbal=int(input('enter account bal'))
            a1=Account(ano,cname,accbal)
            lstacc.append(a1)
                    
            ct=int(input('do you want to continue to add object press 1'))
            if ct!=1:
                break 


        return lstacc

    def display(lstacc):
        print("account display")
        for a1 in lstacc:
            print('----------------------------------------------------')
            print(a1.accno)
            print(a1.cname)
            print(a1.accbal)    

    def searchdata(lstacc,searchno):
        flag=False
        for a1 in lstacc:
                print('----------------------------------------------------')
                if a1.accno==searchno:
                    flag=True
                    print(a1.accno)
                    print(a1.cname)
                    print(a1.accbal)    
                    break
        if flag==False:
            print('element not found')

    def updateaccount(lstacc, searchno, newbal):
        for a1 in lstacc:
            if a1.accno == searchno:
                a1.accbal = newbal
                print("Account balance updated successfully.")
                return

        print("Account not found. Balance was not updated.")

    def deleteaccount(lstacc, accno):
        for a1 in lstacc:
            if a1.accno == accno:
                lstacc.remove(a1)
                print("Account deleted successfully.")
                return

        print("Account not found. Nothing was deleted.")