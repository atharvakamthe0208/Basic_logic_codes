#include <stdio.h>
int main()
{
  
    int a[10];
    int temp=0;
    int found=0;
    printf("Enter Any ten numbers  :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        
        
    }

    printf("Enter the number to search :");
    scanf("%d",&temp);
    for(int i=0;i<10;i++)
    {
        if(temp==a[i])
        {
            printf("element found at %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("element not found ");

    }
    
    return 0;

}