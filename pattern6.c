#include <stdio.h>

int main() {
    int n = 3; // Change 'n' to adjust the number of rows
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j%2 == 0)
            {
                printf("* ");
            }
            if (j%2 == 1)
            {
                printf("  ");
            }
            
            
            
        }
        
        printf("\n");
    }
    
    return 0;
}
