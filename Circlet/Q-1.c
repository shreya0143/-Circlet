#include <stdio.h>

int main() {
    int i, j, n = 5;

   
    for (i = 1; i <= n; i++) {
        
        for (j = 41; j < 41 + i; j++) {
            printf("%d ", j);  
        }
        printf("\n"); 
    }

    return 0;
}

