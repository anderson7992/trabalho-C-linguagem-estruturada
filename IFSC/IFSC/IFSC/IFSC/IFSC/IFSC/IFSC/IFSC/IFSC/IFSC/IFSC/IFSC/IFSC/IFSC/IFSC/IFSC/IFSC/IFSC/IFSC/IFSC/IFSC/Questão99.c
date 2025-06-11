#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100 

int main() {
    int numFuncionarios;
    char nomes[MAX_FUNCIONARIOS][50]; 
    float salarios[MAX_FUNCIONARIOS];   
    float somaSalarios = 0.0;
    float salarioMaisAlto = 0.0;
    float salarioMaisBaixo = 0.0;

    
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &numFuncionarios);

    
    if (numFuncionarios <= 0 || numFuncionarios > MAX_FUNCIONARIOS) {
        printf("Quantidade invalida de funcionarios.\n");
        return 1; 
    }

    int i; 

    
    for (i = 0; i < numFuncionarios; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", nomes[i]); 

        printf("Salario: ");
        scanf("%f", &salarios[i]); 

        somaSalarios += salarios[i]; 

        
        if (i == 0) {
            salarioMaisAlto = salarios[i];
            salarioMaisBaixo = salarios[i];
        } else {
            if (salarios[i] > salarioMaisAlto) {
                salarioMaisAlto = salarios[i]; 
            }
            if (salarios[i] < salarioMaisBaixo) {
                salarioMaisBaixo = salarios[i]; 
            }
        }
    }

    
    float mediaSalarios = somaSalarios / numFuncionarios;

    
    printf("\nMedia dos salarios: %.2f\n", mediaSalarios);
    printf("Salario mais alto: %.2f\n", salarioMaisAlto);
    printf("Salario mais baixo: %.2f\n", salarioMaisBaixo);

    return 0;
}
