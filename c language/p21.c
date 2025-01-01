//you want to swap the guests in two rooms without moving the rooms themselves.Instead of swapping the actual guests
//                          (values), you use pointers (room keys) to access and modify rooms

#include <stdio.h>
void swapguests(int *roomkey1, int *roomkey2) 
{
    int temp = 0;
    temp = *roomkey1;      
    *roomkey1 = *roomkey2; 
    *roomkey2 = temp;      
}
int main()
{
    int guest1 = 0, guest2 = 0;
    printf("Enter a number: ");
    scanf("%d", &guest1);
    printf("Enter a second number: ");
    scanf("%d", &guest2);
    printf("Before swapping of 2 guests: %d %d\n", guest1, guest2);
    swapguests(&guest1, &guest2);
    printf("After swapping of 2 guests: %d %d\n", guest1, guest2);
    return 0; 
}