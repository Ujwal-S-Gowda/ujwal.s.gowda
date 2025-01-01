//to print individual characters of a string in reverse order

#include<stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("The string in reverse order is: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
