//String Comparison Using strcmp Function

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The string \"%s\" is less than \"%s\".\n", str1, str2);
    } else {
        printf("The string \"%s\" is greater than \"%s\".\n", str1, str2);
    }

    return 0;
}
