#include <stdio.h>
#define max 20
int main()
{
    int set1[2][3],set2[3][4],set3[3][4]={0};
    int i,j,k;

    
    printf("Enter the elements of Matrix 1: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&set1[i][j]);
        }
    }

    printf("Enter the elements of Matrix 2: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&set2[i][j]);
        }
    }

    
    for(i=0;i<2;i++)
    {
        for(k=0;k<4;k++)
        {
            for(j=0;j<3;j++)
            {
                set3[i][k]=set3[i][k]+(set1[i][j]*set2[j][k]);
            }
        }    
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%5d",set3[i][j]);
        }
        printf("\n");
    } 

    return 0;

}
