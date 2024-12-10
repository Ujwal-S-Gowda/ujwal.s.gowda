//to store 5 elements in an array and print them

#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter 5 elements in an array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array is:[");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
        if(i<4){
            printf(",");
        }
    }
    printf("] \n");
    return 0;
}