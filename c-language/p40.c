//Matrix Printer

#include <stdio.h>

int main() {
    
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    
    printf("[ "); 
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 3; j++) { 
            printf("%d", arr[i][j]);
            if (j < 2) printf(" "); 
        }
        if (i < 1) printf("\n  "); 
    }
    printf(" ]\n"); 
    return 0;
}

