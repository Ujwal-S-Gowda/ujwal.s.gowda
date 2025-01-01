//factorial of a number using pointers

#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number: \n");
    scanf("%d",&x);
    int *p=&x;
    int fact=1;
    int y=x;
    while(*p>0)
    {
        fact=fact*(*p);
        (*p)--;
    }
    printf("factorial of %d is %d",y,fact);
    return 0;
}