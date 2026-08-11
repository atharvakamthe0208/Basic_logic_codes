#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int i,sum=0,cnt=0,cnt1=0;
    int evsum=0,odsum=0;

    int a[10];

    printf("Enter Any ten numbers  :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        for(int j=i+1;i<5;j++)
        {
            if(a[i]%2==0)
            {
                evsum=evsum+a[i];
                cnt++;

                //printf("The number %d is even \n",a[i]);
            }else
            {
                odsum=odsum+a[i];
                cnt1++;
                //printf("The number %d is odd\n",a[i]);
            }
        }    
    }

    for(int i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }

    



    return 0;

}