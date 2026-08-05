#include <stdio.h>
int main()
{

    int n,a=1;

    printf("Enter any number :");
    scanf("%d",&n);

    do
    {
        printf("%d  * %d =%d \n",n ,a,a*n);
        a++;

    }while(a<=10);
    
    return 0;

}