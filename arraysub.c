#include<stdio.h>
#define max 20

int main()
{
    int i,j,r1,r2,c1,c2,choice;
    int mat1[max][max],mat2[max][max],mat3[max][max];

    printf("Enter Rows And Columns For Matrix - 1\n");
    scanf("%d%d",&r1,&c1);

    printf("Enter Rows And Columns For Matrix - 2\n");
    scanf("%d%d",&r2,&c2);

    if((r1==r2)&&(c1==c2))
    {
        printf("Enter First Matrix -\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }

        printf("Enter Second Matrix -\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\nEnter Your Choice - ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                    {
                        mat3[i][j]=mat1[i][j]+mat2[i][j];
                    }
                }

                printf("\nAddition -\n");
                break;

            case 2:
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                    {
                        mat3[i][j]=mat1[i][j]-mat2[i][j];
                    }
                }

                printf("\nSubtraction -\n");
                break;

            default:
                printf("\nInvalid Choice");
                return 0;
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",mat3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition/Subtraction Not Possible");
    }

    return 0;
}