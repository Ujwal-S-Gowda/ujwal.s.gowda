//to print all unique elements in an array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The unique elements in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
