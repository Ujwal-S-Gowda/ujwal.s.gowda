//String Copy Using strcpy Function

#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "hello world";
    char destination[20];

    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);
    return 0;
}
