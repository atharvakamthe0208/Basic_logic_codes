#include <stdio.h>
int main()
{
    int a[10];
    int fd=0,td=0,bd=0,cnt=0;


    printf("Enter Any ten numbers  :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]%3==0 && a[i]%5==0)
        {
            printf("the number %d is divisible by both 3 and 5 \n",a[i]);
            bd++;
        }
        else if(a[i]%3==0)
        {
            printf("the number %d is divisible by 3 \n",a[i]);
            td++;
        }
        else if(a[i]%5==0)
        {
            printf("the number %d is divisible by  5 \n",a[i]);
            fd++;
        }
        else 
        {
            printf("the number %d is not divisible by any 3 and 5 \n",a[i]);
            cnt++;
        }

        

    }
    printf("total no divisible by 3 and 5 =%d\n",bd);
    printf("total no divisible by 5 =%d\n",fd);
    printf("total no divisible by 3 =%d\n",td);
    printf("total no divisible by none  =%d\n",cnt);
    return 0;

}