//to find the largest of three numbers using pointer

#include <stdio.h>

int findLargest(int *a, int *b, int *c) {
    if (*a > *b && *a > *c)
        return *a;
    else if (*b > *a && *b > *c)
        return *b;
    else
        return *c;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int largest = findLargest(&num1, &num2, &num3);
    printf("The largest number is: %d\n", largest);
    return 0;
}
