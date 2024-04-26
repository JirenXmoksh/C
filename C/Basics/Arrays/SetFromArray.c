#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // create a set to store the unique elements
    int *set = (int *)malloc(n * sizeof(int));

    // iterate over the array and add each element to the set if it is not already present
    for (i = 0; i < n; i++)
    {
        int flag = 0;
        for (j = 0; j < count; j++)
        {
            if (arr[i] == set[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            set[count] = arr[i];
            count++;
        }
    }

    // print the unique elements
    printf("The unique elements of the array are: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", set[i]);
    }

    free(arr);
    free(set);
    return 0;
}