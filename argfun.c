#include <stdio.h>
/*
void add() // without argu and without return
{
    int n1,n2,add;
    printf("enter you number : ");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    printf("addition of %d and %d is : %d",n1,n2,add);
}
void add(int n1,int n2) // with argu and without return
{   int add; 
    printf("enter you number : ");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    printf("addition of %d and %d is : %d",n1,n2,add);
}
*/
/*
void add() //without argu and with return
{
    int n1,n2,add;
    printf("\nenter you number : ");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    printf("\naddition of %d and %d is : %d",n1,n2,add);
}
int main()
{
    add();
    return 0;
}
*/
void add(int n1,int n2) // with argu and without return
{   int add; 
    
    add=n1+n2;
    printf("addition of %d and %d is : %d",n1,n2,add);
}
int main()
{
    add(10 , 20);
    return 0;
}
/*
int main()
{
    add();
    add(12,35);

    return 0;
}*/