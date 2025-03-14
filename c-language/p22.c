//to read 5 number of values in an array and display them in reverse order

#include<stdio.h>
int main()
{
    int arr[5];
    int i,j;
    printf("enter 5 elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the original copy is: [");
    for(i=0;i<5;i++)
    {
        if(i<4)
        {
            printf("%d,",arr[i]);
        }
        else{
            printf("%d",arr[i]);
        }
    }
    printf("]\n");
    printf("the array in reverse order is: [");
    for(j=5-1;j>=0;j--)
    {
        if(j>0)
        {
            printf("%d,",arr[j]);
        }
        else{
            printf("%d",arr[j]);
        }
    }
    printf("]\n");
    return 0;
}