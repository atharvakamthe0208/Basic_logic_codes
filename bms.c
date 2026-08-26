# include <stdio.h>

void chech_bal(float bal)
{
    printf("\nCurrent Balance =%.2f",bal);
}

float withdrawl(float bal)
{
    float amt;
    printf("Enter the Amount for withdrawl :");
    scanf("%f",&amt);

    bal-=amt;
    printf("\n%.2fRS debited from your account.",amt);
    chech_bal(bal);
    return bal;

}

float deposit(float bal)
{
    float amt;
    printf("Enter the Amount to Deposit :");
    scanf("%f",&amt);

    bal+=amt;
    printf("\n%.2fRS deposited to your Account Sucessfully.",amt);
    chech_bal(bal);

    return bal;

}

int main()
{
    int bal=10000;
    int ct, ch;
    do{
        printf("\n=====================Bank Management System ===========================");
        printf("\n1.Check Balance\n2.Withdrawl\n3.Deposit \n4.Exit\nEnter Your choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            chech_bal(bal);

            break;
        case 2:
            bal=withdrawl(bal);
            
            break;
        case 3:
            bal=deposit(bal);
            break;
        case 4:
            printf("\nThank you BMS exited..!!");
            break;
        default:
            printf("\nInvalid choice...!");
            break;
        }
        printf("\nDo you want to continue ? pess(1)");
        scanf("%d",&ct);
    }while (ct==1);
    
        
    return 0;

}