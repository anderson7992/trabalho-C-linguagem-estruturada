#include <stdio.h>


int main() {
    int soma = 0;
    int i; 

    printf("N�meros pares entre 85 e 907:\n");
    
    
    for (i = 86; i <= 907; i += 2) { 
        printf("%d\n", i);
        soma += i; 
    }

    printf("A soma dos n�meros pares �: %d\n", soma);

    return 0;
}
