/******************************************************************************

79. Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e
mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo,
Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário.

*******************************************************************************/

#include <stdio.h>

int main()
{
    /******************************************************************************

81. Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se é
vogal ou consoante.

*******************************************************************************/

#include <stdio.h>

int main(){

    char letra;
    
    printf("Informe uma letra: "); scanf("%c",&letra);
    
    switch (letra){
        
        case 'a': printf("Vogal");
        break;
        case 'A': printf("Vogal");
        break;
        case 'e': printf("Vogal");
        break;
        case 'E': printf("Vogal");
        break;
        case 'i': printf("Vogal");
        break;
        case 'I': printf("Vogal");
        break;
        case 'o': printf("Vogal");
        break;
        case 'O': printf("Vogal");
        break;
        case 'u': printf("Vogal");
        break;
        case 'U': printf("Vogal");
        break;
        
        default: printf("Consoante");
  
    }

    return 0;
}
