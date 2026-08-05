
#include <stdio.h>
int main()
{
    int no,i=1 ,sum=0;

    printf("enter any number :");
    scanf("%d",&no);

    while (i<=no/2)
    {
        if(no%i==0)
        {
            printf("\n %d",i);
            sum=sum+i;

        }
        i++;
        
    }
    printf("\n %d",no);
    printf("\nsum : %d",sum+no);

    if(sum==no)
    {
        printf("it is a perfect number ");
    }else 
    {
        printf("it is not a perfect number ");
    }


    return 0;
}