#include <stdio.h>
int main()
{

    int sum=0;
    int r,no;

    printf("Enter any number :");
    scanf("%d",&no);


    do
    {
        r=no%10;
        sum=sum+r;
        no=no/10;

    }while(no!=0);
    printf(" sum of digits = %d",sum);
    
    return 0;


}