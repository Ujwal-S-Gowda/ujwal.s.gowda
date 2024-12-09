//find the maximum number and minimum number using pointers

#include<stdio.h>
int main()
{
    int a=0,b=0;
    int *p,*q;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    p= &a;
    q= &b;
    if(*p>*q){
        printf("%d is the maximum number\n",*p);
        printf("%d is the minimum number\n",*q);
        }
    else if(*p<*q){
        printf("%d is the maximum number\n",*q);
        printf("%d is the minimum number\n",*p);
        }
    else{
        printf("both numbers are equal\n");
    }
    return 0;
}
