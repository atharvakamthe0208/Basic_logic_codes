#include <stdio.h>
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n enter swap x- %d and y- %d ",x,y );
    return 0;
}
int main()
{
    int a=10,b=20;
    printf("helloo");
     printf("\n enter swap a- %d and b- %d ",a,b);
     swap(a,b);
     printf("\n enter swap x- %d and y- %d ",a,b);
     
    return 0;
}