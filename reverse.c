#include <stdio.h>
int main()
{
    int rev=0;
    int r,no;

    printf("Enter any number :");
    scanf("%d",&no);


    do
    {
        r=no%10;
        rev=rev*10+r;
        no=no/10;

    }while(no!=0);
    printf("Reverse of number =%d",rev);
    return 0;

}