#include <stdio.h>

int main() {
    int produto = 1; 
    int i;

    
    for (i = 1; i <= 15; i++) {
        
        if (i % 2 != 0) {
            produto *= i; 
        }
    }

    
    printf("O produto dos inteiros �mpares de 1 a 15 �: %d\n", produto);

    return 0;
}
