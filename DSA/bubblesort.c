#include <stdio.h>
int main()
{

    int arr[5]={23,34,56,1,32};
    int len=5;
    int i,j;

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<len;i++)
    {
        printf("%5d",arr[i]);
    }
    return 0;

}    
