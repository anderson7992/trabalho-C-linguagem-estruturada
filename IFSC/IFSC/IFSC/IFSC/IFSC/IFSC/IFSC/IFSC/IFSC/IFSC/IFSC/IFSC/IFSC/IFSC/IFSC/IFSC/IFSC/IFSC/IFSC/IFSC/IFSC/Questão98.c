#include <stdio.h>

int main() {
    
    printf("N�mero\tQuadrado\tCubo\n");

    int i; 


    for (i = 0; i <= 10; i++) {
        int quadrado = i * i; 
        int cubo = i * i * i; 

        
        printf("%d\t%d\t\t%d\n", i, quadrado, cubo);
    }

    return 0;
}
