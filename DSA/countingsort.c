#include <stdio.h>
int getmax(int arr[],int len)
{
    int max=arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;

}
void countingsort(int arr[],int len)
{
    //1.find max element 
    int max=getmax(arr,len);
    //2.create a count array
    int count[max+1];
    //3.set the count array elements to zero 
    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }

    //4.store the count of original digits 
    
    for(int i=0;i<len;i++)
    {
        count[arr[i]]++;

    }
    //5.update the original array
    int index=0;//itrating original array
    int i=0;//itrating the count array
    for(i=0;i<max+1;i++)
    {
        while (count[i]>0)
        {
            arr[index]=i;
            count[i]--;
            index++;
        }
        
    }
}
void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[]={2,9,4,5,1,7,2};
    int len=7;

    printf("Before Sorting : ");
    display(arr, len);

    countingsort(arr,len);

    printf("\nAfter Sorting : ");
    display(arr, len);

    return 0;

}