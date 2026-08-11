#include <stdio.h>
int main()
{
    int i,sum=0,cnt=0,cnt1=0;
    int evsum=0,odsum=0;

    

    int a[10];
    int ev[10] = {0};
    int od[10] = {0};
    printf("Enter Any ten numbers  :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
            ev[cnt]=a[i];
            evsum=evsum+a[i];
            cnt++;
        }else
        {
            od[cnt1]=a[i];
            odsum=odsum+a[i];
            cnt1++;
            
        }
    }
    printf("\nThe Total even numbers are : %d\n The Sum of Even numbers is :%d\n",cnt,evsum);
    for(int i=0;i<cnt;i++)
    {
            printf("\neven : %d",ev[i]);
    }

    printf("\n====================================");

    printf("\nThe Total odd numbers are  : %d\n The Sum of odd numbers is :%d\n",cnt1,odsum);
    for(int i=0;i<cnt1;i++)
    {
            printf("\nodd : %d",od[i]);
        
    }
    printf("\n====================================");


    
    


    return 0;

}