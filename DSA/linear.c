#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int key;
    printf("Enter A Key - ");
    scanf("%d",&key);

    for(int i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(key==arr[i])
        {
            printf("\nKey Found at %d",i+1);
            return 0;
        }
    }
    return 0;
}