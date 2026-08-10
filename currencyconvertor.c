#include <stdio.h>

int main()
{
    int ch1, ch2, ct;
    float input, result;

    do
    {
        printf("\n================ CURRENCY CONVERTER ================\n");
        printf("1. Rupee (INR)\n");
        printf("2. Dollar (USD)\n");
        printf("3. Euro (EUR)\n");
        printf("Enter your choice: ");
        scanf("%d", &ch1);

        switch (ch1)
        {
            case 1: // Rupee
                printf("\nEnter amount in Rupee: ");
                scanf("%f", &input);

                printf("\nConvert Rupee to:");
                printf("\n1. Rupee");
                printf("\n2. Dollar");
                printf("\n3. Euro");
                printf("\nEnter choice: ");
                scanf("%d", &ch2);

                switch (ch2)
                {
                    case 1:
                        result = input;
                        printf("\n%.2f INR = %.2f INR\n", input, result);
                        break;

                    case 2:
                        result = input / 95;
                        printf("\n%.2f INR = %.2f USD\n", input, result);
                        break;

                    case 3:
                        result = input / 108;
                        printf("\n%.2f INR = %.2f EUR\n", input, result);
                        break;

                    default:
                        printf("\nInvalid Choice!\n");
                }
                break;

            case 2: // Dollar
                printf("\nEnter amount in Dollar: ");
                scanf("%f", &input);

                printf("\nConvert Dollar to:");
                printf("\n1. Rupee");
                printf("\n2. Dollar");
                printf("\n3. Euro");
                printf("\nEnter choice: ");
                scanf("%d", &ch2);

                switch (ch2)
                {
                    case 1:
                        result = input * 95;
                        printf("\n%.2f USD = %.2f INR\n", input, result);
                        break;

                    case 2:
                        result = input;
                        printf("\n%.2f USD = %.2f USD\n", input, result);
                        break;

                    case 3:
                        result = input * 0.88;
                        printf("\n%.2f USD = %.2f EUR\n", input, result);
                        break;

                    default:
                        printf("\nInvalid Choice!\n");
                }
                break;

            case 3: // Euro
                printf("\nEnter amount in Euro: ");
                scanf("%f", &input);

                printf("\nConvert Euro to:");
                printf("\n1. Rupee");
                printf("\n2. Dollar");
                printf("\n3. Euro");
                printf("\nEnter choice: ");
                scanf("%d", &ch2);

                switch (ch2)
                {
                    case 1:
                        result = input * 108;
                        printf("\n%.2f EUR = %.2f INR\n", input, result);
                        break;

                    case 2:
                        result = input * 1.14;
                        printf("\n%.2f EUR = %.2f USD\n", input, result);
                        break;

                    case 3:
                        result = input;
                        printf("\n%.2f EUR = %.2f EUR\n", input, result);
                        break;

                    default:
                        printf("\nInvalid Choice!\n");
                }
                break;

            default:
                printf("\nInvalid Main Menu Choice!\n");
        }

        printf("\nDo you want to continue? Press 1 for Yes: ");
        scanf("%d", &ct);

    } while (ct == 1);

    printf("\n================ THANK YOU ================\n");

    return 0;
}