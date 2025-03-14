//to input a string and print it

#include<stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("The entered string is: %s\n", str);

    return 0;
}
