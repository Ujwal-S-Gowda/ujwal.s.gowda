#include <stdio.h>

int main() 
{
    int marks1, marks2, marks3;

    printf("Enter the marks of Mathematics: ");
    scanf("%d", &marks1);
    printf("Enter the marks of Physics: ");
    scanf("%d", &marks2);
    printf("Enter the marks of Chemistry: ");
    scanf("%d", &marks3);

    if (marks1 < 0 || marks1 > 100 || marks2 < 0 || marks2 > 100 || marks3 < 0 || marks3 > 100) {
        printf("Invalid marks entered! Marks should be between 0 and 100.\n");
    }
    else if (marks1 > 33 && marks2 > 33 && marks3 > 33) {
        printf("You have passed in all subjects!\n");
        printf("Your total marks is %d\n", marks1 + marks2 + marks3);
    }
    else if (marks1 < 33 && marks2 < 33 && marks3 < 33) {
        printf("You have failed in all subjects!\n");
        printf("Your total marks is %d\n", marks1 + marks2 + marks3);
    }
    else { 
        printf("You have failed in: ");
        if (marks1 < 33) printf("Mathematics ");
        if (marks2 < 33) printf("Physics ");
        if (marks3 < 33) printf("Chemistry ");
        
        printf("\nYour total marks is %d\n", marks1 + marks2 + marks3);
    }

    return 0;
}
