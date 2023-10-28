#include <stdio.h>

int main() {
    int n = 4;


    for (int i = 0; i < n; i++) {
        int number = 1;
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%6d ", number);
            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
