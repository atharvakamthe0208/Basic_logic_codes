#include <stdio.h>

void areaTriangle()
{
    float base, height, area;

    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of Triangle = %.2f\n", area);
}

void areaCircle()
{
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;

    printf("Area of Circle = %.2f\n", area);
}

void areaRect()
{
    float length, width, area;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    area = length * width;

    printf("Area of Rectangle = %.2f\n", area);
}

int main()
{
    int ch, ct;

    do
    {
        printf("\n1. Triangle\n");
        printf("2. Circle\n");
        printf("3. Rectangle\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                areaTriangle();
                break;

            case 2:
                areaCircle();
                break;

            case 3:
                areaRect();
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("\nDo you want to continue?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Enter your choice: ");
        scanf("%d", &ct);

    } while(ct == 1);

    return 0;
}