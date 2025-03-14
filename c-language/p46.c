//to print all even numbers from m to n using pointers

#include <stdio.h>

void printEvenNumbers(int *start, int *end) {
    for (int *ptr = start; *ptr <= *end; (*ptr)++) {
        if (*ptr % 2 == 0) {
            printf("%d ", *ptr);
        }
    }
}

int main() {
    int m, n;

    printf("Enter the starting number (m): ");
    scanf("%d", &m);

    printf("Enter the ending number (n): ");
    scanf("%d", &n);

    printEvenNumbers(&m, &n);

    return 0;
}
