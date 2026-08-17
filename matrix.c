#include <stdio.h>
#define max 20
int main()
{
    int i,j,r1,r2,c1,c2;
    int mat1[max][max],mat2[max][max],mat3[max][max];

    printf("Enter no of rows and col in matrix 1 :");
    scanf("%d%d",&r1,&c1);

    printf("Enter no of rows and col in matrix 2 :");
    scanf("%d%d",&r2,&c2);



    if((r1==r2)&&(c1==c2))
    {
        printf("Enter elements for matrix 1 :");
        for(i=0;i<r1;i++)
        {
        for(j=0;j<c1;j++)
            {
            scanf("%d",&mat1[i][j]);
            }
        } 
        
        printf("Enter elements for matrix 2 :");
        for(i=0;i<r2;i++)
        {
        for(j=0;j<c2;j++)
            {
            scanf("%d",&mat2[i][j]);
            }
        } 
        
        
        for(i=0;i<r1;i++)
        {
        for(j=0;j<c2;j++)
            {
            mat3[i][j]=mat2[i][j]+mat1[i][j];
            }
            
        }  

        printf("Addition of 2 matrix :\n");
        for(i=0;i<r1;i++)
        {
        for(j=0;j<c2;j++)
            {
                printf("%5d",mat3[i][j]);
            }
            printf("\n");
        } 
    }                   
    return 0;

}