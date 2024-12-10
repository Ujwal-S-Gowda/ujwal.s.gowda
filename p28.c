//to print all the alphabets using a pointer

#include<stdio.h>
int main()
{
    char alphabets[52];
    char *ptr = alphabets;

    for (int i = 0; i < 26; i++)
    {
        ptr[i] = 'A' + i;
    }

    for (int i = 26; i < 52; i++)
    {
        ptr[i] = 'a' + (i - 26);
    }

    printf("The alphabets are:\n");
    for (int i = 0; i < 52; i++)
    {
        printf("%c ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
