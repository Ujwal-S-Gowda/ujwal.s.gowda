//swapping two numbers using pass by value and pass by reference

#include <stdio.h>
void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping: x = %d, y = %d\n",x,y);
    swapByValue(x,y);
    printf("After swapByValue: x = %d, y = %d\n",x,y);
    swapByReference(&x,&y);
    printf("After swapByReference: x = %d, y = %d\n",x,y);
    return 0;
}

