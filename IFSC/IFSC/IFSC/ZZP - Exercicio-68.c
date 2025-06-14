/******************************************************************************

68. Crie um algoritmo que calcula o desconto previdenciário de um funcionário. Dado
um salário, o programa deve retornar o valor do desconto proporcional ao
mesmo. 
O cálculo segue a regra: o desconto é de 11% do valor do salário,
entretanto, o valor máximo de desconto é 318,20. Sendo assim, ou o algoritmo
retorna o valor equivalente a 11% sobre o salário ou 318,20.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float salario, desconto;
    
    printf("Escreva salário atual: "); scanf("%f", &salario);
    
    desconto = salario * 0.11;
    
    if(desconto > 318.2)
        desconto = 318.2;
    
    printf("Desconto: %.2f\n", desconto);

    return 0;
}
