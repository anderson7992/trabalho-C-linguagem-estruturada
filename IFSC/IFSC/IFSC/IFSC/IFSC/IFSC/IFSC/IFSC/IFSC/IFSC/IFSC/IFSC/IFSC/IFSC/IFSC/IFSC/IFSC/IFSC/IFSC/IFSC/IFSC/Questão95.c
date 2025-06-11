#include <stdio.h>

int main() {
    int i;
    int idade[45];
    float altura[45];
    int somaIdadeMenor170 = 0;
    int contadorMenor170 = 0;
    float somaAlturaMaior20 = 0.0;
    int contadorMaior20 = 0;

    
    for (i = 0; i < 45; i++) {
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Digite a altura do aluno %d (em metros): ", i + 1);
        scanf("%f", &altura[i]);
        
        
        if (altura[i] < 1.70) {
            somaIdadeMenor170 += idade[i];
            contadorMenor170++;
        }

        
        if (idade[i] > 20) {
            somaAlturaMaior20 += altura[i];
            contadorMaior20++;
        }
    }


    if (contadorMenor170 > 0) {
        float mediaIdadeMenor170 = (float)somaIdadeMenor170 / contadorMenor170;
        printf("\nA idade m�dia dos alunos com menos de 1,70m �: %.2f anos\n", mediaIdadeMenor170);
    } else {
        printf("\nN�o h� alunos com menos de 1,70m.\n");
    }

    
    if (contadorMaior20 > 0) {
        float mediaAlturaMaior20 = somaAlturaMaior20 / contadorMaior20;
        printf("A altura m�dia dos alunos com mais de 20 anos �: %.2f metros\n", mediaAlturaMaior20);
    } else {
        printf("N�o h� alunos com mais de 20 anos.\n");
    }

    return 0;
}
