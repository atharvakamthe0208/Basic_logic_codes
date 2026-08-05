#include <stdio.h>
int main()
{
    int no,i=1,a=0,b=1,c;

    printf("enter any number :");
    scanf("%d",&no);

    
    while (i<=no)
    {
        printf("\t%d",a);
        
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    
    //0 1 1 2 3 5

    return 0;

}