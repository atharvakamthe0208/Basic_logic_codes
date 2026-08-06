#include <stdio.h>

int main()
{
    int s, ch, ct, b, h, l, w, r;
    float area;

    do
    {
        printf("\n1.Area of Square");
        printf("\n2.Area of Triangle");
        printf("\n3.Area of Rectangle");
        printf("\n4.Area of Circle");
        printf("\nEnter your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the Side of Square: ");
            scanf("%d", &s);
            area = s * s;
            printf("Area of Square = %.2f\n", area);
            break;

        case 2:
            printf("Enter the Base & Height of Triangle: ");
            scanf("%d%d", &b, &h);
            area = 0.5 * b * h;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter the Length & Width of Rectangle: ");
            scanf("%d%d", &l, &w);
            area = l * w;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 4:
            printf("Enter the Radius: ");
            scanf("%d", &r);
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f\n", area);
            break;

        default:
            printf("Invalid Choice!\n");
        }

        printf("Do you want to continue? Press 1 for Yes: ");
        scanf("%d", &ct);

    } while (ct == 1);

    printf("\n---------------- THANK YOU ----------------\n");

    return 0;
}