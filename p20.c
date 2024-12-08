//reversing a number using function

#include<stdio.h>
int reverseNumber(int num) 
{
    int reversed = 0;
    while (num != 0) 
    {
        int digit=num%10;         
        reversed=reversed*10+digit;  
        num/=10;                     
    }
    return reversed;
}
int main()
{
    int number=0,reversedNumber=0;
    printf("Enter a number:");
    scanf("%d",&number);
    reversedNumber=reverseNumber(number);
    printf("the reversed number: %d",reversedNumber);
    return 0;
}