#include <stdio.h>

int main() {
    int n = 5; 
    
    for (int i = 0; i <= n; i++) {
       
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (int j = i; j >= 0; j--) {
            printf("%d", j);
        }
        for (int j = 1; j < i+1; j++) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}

 