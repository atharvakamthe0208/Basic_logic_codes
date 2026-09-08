no=int(input("Enter Any Number :"))
if no<0:
    if no%2==0:
        print("The Number is Even ")
    else :
        print("The Number is Odd")
elif no>0
    print("The number is -ve")
else :
    print("The number is 0")
    
print("choice 1.admin 2.emp 3.manager \n")
role=input("enter your role : ")
if role.lower()=="admin":
    print("Welcome to Admin Panel ")
elif role=="emp":
    print("Welcome to Employee Panel ")
elif role=="manager":
     print("Welcome to Manager Panel ")
else :
    print("INVALID CHOICE ")