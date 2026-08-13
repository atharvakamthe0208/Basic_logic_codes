#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int i,j,num;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d",arr[j]);
            
        }
        printf("\n");
        num=arr[4];
        for(j=4;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=num;
    }
    
    return 0;
}