#include <stdio.h>
#define max 20
int main()
{
    int set1[max],set2[max],set3[max];
    int l1,l2;
    int i,j,k=0;
    int flag;
    printf("Enter how many numbers do you want in set 1: ");
    scanf("%d", &l1);
    printf("Enter %d numbers in set1:\n", l1);
    for(i = 0; i < l1; i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("Enter how many numbers do you want in set 2: ");
    scanf("%d", &l2);

    printf("Enter %d numbers in set2:\n", l2);
    for(i = 0; i < l2; i++)
    {
        scanf("%d", &set2[i]);
    }

    for(i=0;i<l1;i++)
    {
        flag=0;
        for(j=0;j<l2;j++)
        {
            if(set1[i]==set2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            set3[k]=set1[i];
            k++;   
        }
    }
    printf("\nIntersection of Set1 and Set2:\n");

    if(k == 0)
    {
        printf("No common elements.");
    }
    else
    {
        for(i = 0; i < k; i++)
        {
            printf("%d ", set3[i]);
        }
    }
    return 0;

}