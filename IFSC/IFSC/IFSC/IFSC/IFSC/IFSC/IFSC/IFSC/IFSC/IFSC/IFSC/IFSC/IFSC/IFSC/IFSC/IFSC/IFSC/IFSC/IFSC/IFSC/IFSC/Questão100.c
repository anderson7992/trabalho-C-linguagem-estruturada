#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int maior, menor;
    float soma = 0.0;

    
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i]; 

        
        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i]; 
            }
            if (numeros[i] < menor) {
                menor = numeros[i]; 
            }
        }
    }

    
    float media = soma / 10;

    
    printf("\nMedia: %.2f\n", media);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
