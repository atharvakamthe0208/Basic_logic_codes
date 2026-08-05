#include <stdio.h>
int main()
{

    int n,rev,r;

    printf("\nEnter any number :");
    scanf("%d",&n);

    int x=n;

    rev=0;
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }while (n!=0);

    printf("\n reverse number :%d",rev);
    if(rev==x)
    {
        printf("\nIt is a Palindrome");

    }else{
        printf("\nIt is not a Palindrome");
    }
    return 0;

}