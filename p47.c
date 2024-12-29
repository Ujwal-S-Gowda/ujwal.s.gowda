//Structure for Storing Book Information

#include <stdio.h>

struct Book {
    char title[50];   
    char author[50];  
    float price;   
    int book_id;    
};

int main() {
    struct Book b1; 

    printf("Enter the book title(use '-' instead of space): ");
    scanf("%s", b1.title);
    printf("Enter the author name(use '-' instead of space): ");
    scanf("%s", b1.author);
    printf("Enter the price: ");
    scanf("%f", &b1.price);
    printf("Enter the book ID: ");
    scanf("%d", &b1.book_id);

    printf("\nBook Details:\n");
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Price: %.2f\n", b1.price);
    printf("Book ID: %d\n", b1.book_id);

    return 0;
}
