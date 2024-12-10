//to count the total number of duplicate elements in an array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter %d elements for the first array:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("The elements of the second array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}


