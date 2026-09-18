
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i;
    printf("Enter the array size :");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d",arr+i);
    }
    int sum=0;
    for(i=0;i<num;i++)
    {
        sum=sum+arr[i];

    }
    printf("%d\n",sum);
    

    return 0;
}    