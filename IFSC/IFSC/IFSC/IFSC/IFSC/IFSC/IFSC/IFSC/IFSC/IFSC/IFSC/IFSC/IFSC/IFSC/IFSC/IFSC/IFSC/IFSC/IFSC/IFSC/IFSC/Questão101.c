#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0) {
        return 1; 
    }
    unsigned long long resultado = 1;
    int i; 
    for (i = 1; i <= n; i++) {
        resultado *= i; 
    }
    return resultado;
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro n�o negativo: ");
    scanf("%d", &numero);

    
    if (numero < 0) {
        printf("Fatorial n�o definido para n�meros negativos.\n");
    } else {
        unsigned long long resultado = fatorial(numero);
        printf("O fatorial de %d �: %llu\n", numero, resultado);
    }

    return 0;
}
