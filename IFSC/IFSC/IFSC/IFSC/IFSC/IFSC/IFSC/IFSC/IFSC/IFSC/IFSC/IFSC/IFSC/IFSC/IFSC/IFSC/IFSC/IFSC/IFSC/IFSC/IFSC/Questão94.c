#include <stdio.h>

int main() {
    int A, B;
    
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    
    printf("\nExecutando o conjunto 10 vezes:\n");
    int i; 
    for (i = 0; i < 10; i++) {
        int Modulo = A % B;
        printf("Itera��o %d: %d mod %d = %d\n", i + 1, A, B, Modulo);
    }

    
    printf("\nN�o executando nenhuma vez:\n");


    
    printf("\nExecutando o conjunto 100 vezes com duas estruturas de repeti��o:\n");
    int j; 
    for (i = 0; i < 10; i++) { 
        for (j = 0; j < 10; j++) { 
            int Modulo = A % B; 
            printf("Itera��o %d.%d: %d mod %d = %d\n", i + 1, j + 1, A, B, Modulo);
        }
    }

    
    int N;
    printf("\nDigite quantas vezes deseja executar o conjunto (N): ");
    scanf("%d", &N);

    printf("\nExecutando o conjunto %d vezes:\n", N);
    for (i = 0; i < N; i++) {
        int Modulo = A % B; 
        printf("Itera��o %d: %d mod %d = %d\n", i + 1, A, B, Modulo);
    }

    return 0;
}
