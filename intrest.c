#include <stdio.h>
float threemon(float amount )
{

}

int main()
{
    float amt, bal;
    int ct, ch;
    do{
        printf("\n=====================Bank Management System ===========================");
        printf("Enter Amount to Deposited :");
        scanf("%f",&amt);
        printf("\n1.3 Months\n2.6 Months\n3.12Months \n4.Exit\nEnter Your choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            threemon(bal);

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