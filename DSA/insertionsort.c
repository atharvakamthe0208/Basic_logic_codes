#include <stdio.h>
int main()
{

    int arr[5]={23,34,56,1,32};
    int len=5;
    int i,j;

    for(int i=1;i<len;i++)
    {
        int key=arr[i];
        for(j=i-1;j>=0&&key<arr[j];j--)
        {
            arr[j+1]=arr[j];
            
        }
            printf("\n%5d",arr[i]);
            printf("\n%5d",arr[j]);
        arr[j+1]=key;
    }



    for(int i=0;i<len;i++)
    {
        printf("%5d",arr[i]);
    }


    return 0;

}