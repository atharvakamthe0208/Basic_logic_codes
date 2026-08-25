#include <stdio.h>
int main()
{
    
        int a=10;
        int b=20;
        int c=30;
        int *ptr1=&b, *ptr2=&c, *ptr3=&a;
        int **dbptr1=&ptr3, **dbptr2=&ptr1, **dbptr3=&ptr2;
        **dbptr1+=20;
        ptr2=&b;
        *dbptr2=*dbptr1;
        printf("%d\n", a+b+c);
        printf("%d\n",*ptr2);
        printf("%d\n",**dbptr3);
        printf("%d\n",**dbptr1);
        printf("%d\n",**dbptr2);

        return 0;
}