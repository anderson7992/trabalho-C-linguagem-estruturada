/******************************************************************************

77. Elaborar um algoritmo para imprimir o número de dias de um dado mês e ano.
Anos bissextos deverão ser tratados convenientemente.

Dica: Anos bissextos são múltiplos de 4 e não são múltiplos de 100, exceto os
anos múltiplos de 400, que também são bissextos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano, mes, ndias = 31, aux;
    
    
    printf("Informe mês e ano: "); scanf("%d",&mes); scanf("%d",&ano);
    
    switch (mes){
        
        case 4: ndias = 30;
        break;
        case 6: ndias = 30;
        break;
        case 9: ndias = 30;
        break;
        case 11: ndias = 30;
        break;
        
        case 2: 
        if(ano%4==0 && ano%100!=0 || ano%400==0)
            ndias = 29;
        else
            ndias = 28;
        
    }
    
    printf("Dias do mês %d do ano %d = %d",mes,ano,ndias);

    return 0;
}
