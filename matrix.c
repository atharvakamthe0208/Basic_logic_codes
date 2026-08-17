#include <stdio.h>
int main()
{
    int i,j;
    int mat1[3][3],mat2[3][3],mat3[3][3];

    printf("Enter elements for matrix 1 :");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
           scanf("%d",&mat1[i][j]);
        }
    } 
    
    printf("Enter elements for matrix 2 :");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
           scanf("%d",&mat2[i][j]);
        }
    } 
    
    
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
           mat3[i][j]=mat2[i][j]+mat1[i][j];
        }
        
    }  

    printf("Addition of 2 matrix :\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
            printf("%5d",mat3[i][j]);
        }
        printf("\n");
    }                
    return 0;

}