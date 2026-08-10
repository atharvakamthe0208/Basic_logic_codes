#include <stdio.h>

int main() {
    int arr[5]={10,20,30,40,50};
    int i,sum=0;
    
    printf("\n");
    printf("-------Print the Array-----------\n");
    for(i=0;i<=4;i++)
    {   
        
        printf("%d\n",arr[i]);
        
    }
    printf("-------Reverse the Array-----------\n");
    for(i=4;i>=0;i--)
    {
        
        printf("%d\n",arr[i]);
    }
    
    for(i=0;i<=4;i++)
    {   
        sum+=arr[i];
        
        
        
    }
    printf("-------Sum of the Array-----------\n");
    printf("%d\n",sum);
    
    
    return 0;
}