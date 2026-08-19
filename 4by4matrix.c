#include <stdio.h>

int main()
{
    int a[4][4] = {0};
    int i, j;

    printf("Enter 3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            a[i][3] += a[i][j];
        }
    }

    
    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 3; i++)
        {
            a[3][j] += a[i][j];
        }
    }

   
    for(i = 0; i < 3; i++)
    {
        a[3][3] += a[i][i];
    }

    
    printf("\n4x4 Matrix:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}