#include <stdio.h>
void add(int n1,int n2)
{
    int sum;
    
    sum=n1+n2;
    printf("Addition of two numbers : %d\n",sum);
}

int sub()
{
    int n1,n2,s;
    printf("\nEnter two numbers :");
    scanf("%d%d",&n1,&n2);
    s=n1-n2;

    return s;

}

int main()
{

    int n1,n2,s;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    add(n1,n2);

    s=sub();
    printf("Substraction of two numbers = %d",s);
    return 0;
}