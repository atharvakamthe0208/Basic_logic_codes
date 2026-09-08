# no=int(input("Enter any number :"))
# if no%2==0:
#     print("the number is EVEN")
# else:
#     print("the number is ODD")    


# ip=int(input("1.RED 1.YELLOW 3.GREEN 4.EXIT \n Enter your choice : "))
# if ip==1:
#     print("STOP")
# elif ip==2:
#     print("Start")
# elif ip==3:
#     print("Go")
# elif ip==4:
#     print("thankyou and exit ")
# else :
#     print("INVALID CHOICE ")       

ip=int(input("1.ADD 1.SUB 3.MUL 4.DIV 5.EXIT \n Enter your choice : "))
if ip==1:
    no=int(input("Enter 1st number :"))
    no2=int(input("Enter 2nd number :"))
    print("ADDITION :",(no+no2))
elif ip==2:
    no=int(input("Enter 1st number :"))
    no2=int(input("Enter 2nd number :"))
    print("SUBSTRACTION :",(no-no2))
    print()
elif ip==3:
    no=int(input("Enter 1st number :"))
    no2=int(input("Enter 2nd number :"))
    print("MULTIPLICATION :",(no*no2))
    print()
elif ip==4:
    no=int(input("Enter 1st number :"))
    no2=int(input("Enter 2nd number :"))
    print("DIVISION :",(no/no2))
    print()
elif ip==5:                
    print("thankyou and exit ")
else:
     print("INVALID CHOICE ")  


