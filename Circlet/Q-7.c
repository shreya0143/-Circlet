#include <stdio.h>

int main() {
    int i, j;

    
    for(i = 1; i <= 3; i++) {
        
        if(i == 1 || i == 3) {
            for(j = 1; j <= 5; j++) {
                printf("* "); 
            }
        }
        
        else if(i == 2) {
            printf("*");  
            for(j = 1; j <= 3; j++) {
                printf("  ");  
            }
            printf(" *");  
        }
        
        printf("\n");
    }

    
    for(i = 1; i <= 2; i++) {
        printf("*\n");  
    }

    return 0;
}

