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
 void countingsort(int arr[],int len ,int expo)
 {
    int count[10]={0};
    //store the counting of original array digits eg: 0 0 0 1 2 0 1 0
    for(int i=0;i<len;i++)
    {
        count[(arr[i]/expo)%10]++;
    }
    //update the count array and store the indexing into it 
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i-1];
    }
    int output[len];

    for(int i=len-1;i>=0;i--)
    {
        int digit=(arr[i]/expo)%10;
        output[count[digit]-1]=arr[i];
        count[digit]--;
    }

    for(int i=0;i<len;i++)
    {
        arr[i]=output[i];
    }
 }
 void expo(int arr[],int len)
 {
    int max=getmax(arr,len);
    for(int i=1;max/i>0;i*=10)
    {
        countingsort(arr,len,i);
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
    int arr[]={34,78,56,234,99};
    int len=5;

    printf("Before Sorting : ");
    display(arr, len);

    expo(arr,len);

    printf("\nAfter Sorting : ");
    display(arr, len);
    return 0;

 }