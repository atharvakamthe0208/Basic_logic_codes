#include <stdio.h>
#define max 20

int main()
{
    int set1[max], set2[max], set3[max];
    int l1, l2;
    int i, j, k;
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

    for(i = 0, k = 0; i < l1; i++)
    {
        set3[k] = set1[i];
        k++;
    }

    for(j = 0; j < l2; j++)
    {
        flag = 1;

        for(i = 0; i < l1; i++)
        {
            if(set1[i] == set2[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            set3[k] = set2[j];
            k++;
        }
    }

    printf("\nSet Union:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", set3[i]);
    }

    return 0;
}