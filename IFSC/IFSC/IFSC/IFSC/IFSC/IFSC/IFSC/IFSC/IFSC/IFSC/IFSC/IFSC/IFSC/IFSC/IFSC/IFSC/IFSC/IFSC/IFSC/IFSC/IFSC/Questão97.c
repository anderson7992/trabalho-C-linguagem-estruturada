#include <stdio.h>

int main() {
    int numero;
    int i; 

    
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    
    printf("Tabela de multiplica��o do %d:\n", numero);
    for (i = 1; i <= 13; i++) { 
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
