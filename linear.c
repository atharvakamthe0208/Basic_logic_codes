#include <stdio.h>
int main()
{
    int i,arr[5],j,temp;

    printf("Enter Any ten numbers  :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        }
    }    
    printf("\n Sorting :");
    for(i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }



    return 0;

}
