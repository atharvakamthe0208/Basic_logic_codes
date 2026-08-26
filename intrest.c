#include <stdio.h>

float threemon(float amount)
{
    float rate = 5.0;
    return amount + (amount * rate * 3) / (100 * 12);
}

float sixmon(float amount)
{
    float rate = 6.0;
    return amount + (amount * rate * 6) / (100 * 12);
}

float twelvemon(float amount)
{
    float rate = 7.0;
    return amount + (amount * rate * 12) / (100 * 12);
}

int main()
{
    float amt, bal;
    int ct, ch;

    do
    {
        printf("\n================= Bank Management System =================");
        printf("\nEnter Amount to Deposit : ");
        scanf("%f", &amt);

        printf("\n1. 3 Months\n2. 6 Months\n3. 12 Months\n4. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            bal = threemon(amt);
            printf("\nAmount Deposited : %.2f", amt);
            printf("\nMaturity Amount after 3 Months : %.2f", bal);
            break;

        case 2:
            bal = sixmon(amt);
            printf("\nAmount Deposited : %.2f", amt);
            printf("\nMaturity Amount after 6 Months : %.2f", bal);
            break;

        case 3:
            bal = twelvemon(amt);
            printf("\nAmount Deposited : %.2f", amt);
            printf("\nMaturity Amount after 12 Months : %.2f", bal);
            break;

        case 4:
            printf("\nThank You! BMS Exited...");
            return 0;

        default:
            printf("\nInvalid Choice!");
        }

        printf("\n\nDo you want to continue? Press 1 for Yes : ");
        scanf("%d", &ct);

    } while (ct == 1);

    return 0;
}