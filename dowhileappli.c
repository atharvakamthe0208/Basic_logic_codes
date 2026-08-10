#include <stdio.h>

int main()
{
    int ch1, ch2;
    int ct, ct1;
    int qty;
    int amount;
    int total = 0;

    do
    {
        printf("\n============== SHOPPING MALL ==============\n");
        printf("1. Electronics\n");
        printf("2. Clothing\n");
        printf("3. Grocery\n");
        printf("4. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &ch1);

        switch (ch1)
        {
            
            case 1:
                do
                {
                    printf("\n============== ELECTRONICS ==============\n");
                    printf("1. Mobile          - Rs.15000\n");
                    printf("2. Laptop          - Rs.50000\n");
                    printf("3. Television      - Rs.30000\n");
                    printf("4. Air Conditioner - Rs.40000\n");

                    printf("Enter your Choice : ");
                    scanf("%d", &ch2);

                    switch (ch2)
                    {
                        case 1:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 15000 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 2:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 50000 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 3:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 30000 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 4:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 40000 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        default:
                            printf("Invalid Choice!\n");
                    }

                    printf("\nAdd More Electronics? (1=Yes, 0=No): ");
                    scanf("%d", &ct);

                } while (ct == 1);
                break;

            
            case 2:
                do
                {
                    printf("\n============== CLOTHING ==============\n");
                    printf("1. Shirt     - Rs.800\n");
                    printf("2. Jeans     - Rs.1200\n");
                    printf("3. T-Shirt   - Rs.500\n");
                    printf("4. Jacket    - Rs.2000\n");

                    printf("Enter your Choice : ");
                    scanf("%d", &ch2);

                    switch (ch2)
                    {
                        case 1:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 800 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 2:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 1200 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 3:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 500 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 4:
                            printf("Enter Quantity : ");
                            scanf("%d", &qty);
                            amount = 2000 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        default:
                            printf("Invalid Choice!\n");
                    }

                    printf("\nAdd More Clothing Items? (1=Yes, 0=No): ");
                    scanf("%d", &ct);

                } while (ct == 1);
                break;

            
            case 3:
                do
                {
                    printf("\n============== GROCERY ==============\n");
                    printf("1. Rice      - Rs.60/kg\n");
                    printf("2. Sugar     - Rs.45/kg\n");
                    printf("3. Oil       - Rs.150/ltr\n");
                    printf("4. Wheat     - Rs.40/kg\n");

                    printf("Enter your Choice : ");
                    scanf("%d", &ch2);

                    switch (ch2)
                    {
                        case 1:
                            printf("Enter Quantity (kg): ");
                            scanf("%d", &qty);
                            amount = 60 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 2:
                            printf("Enter Quantity (kg): ");
                            scanf("%d", &qty);
                            amount = 45 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 3:
                            printf("Enter Quantity (ltr): ");
                            scanf("%d", &qty);
                            amount = 150 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        case 4:
                            printf("Enter Quantity (kg): ");
                            scanf("%d", &qty);
                            amount = 40 * qty;
                            total += amount;
                            printf("Amount = Rs.%d\n", amount);
                            break;

                        default:
                            printf("Invalid Choice!\n");
                    }

                    printf("\nAdd More Grocery Items? (1=Yes, 0=No): ");
                    scanf("%d", &ct);

                } while (ct == 1);
                break;

            
            case 4:
                printf("\n=========== FINAL BILL ===========\n");
                printf("Total Amount = Rs.%d\n", total);
                printf("Thank You For Shopping!\n");
                return 0;

            default:
                printf("Invalid Main Menu Choice!\n");
        }

        printf("\nDo you want to continue shopping? (1=Yes, 0=No): ");
        scanf("%d", &ct1);

    } while (ct1 == 1);

    printf("\n=========== FINAL BILL ===========\n");
    printf("Total Amount = Rs.%d\n", total);
    printf("Thank You For Shopping!\n");

    return 0;
}