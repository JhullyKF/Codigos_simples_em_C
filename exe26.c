/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    printf("Insira uma letra para saber se é uma vogal ou consoante: ");
    scanf(" %c", &letra); 
    //deixar um espaço entre " e o % para não pegar lixo de memória 
    
    switch (letra){
        case 'a': printf("É uma vogal"); break;
        case 'e': printf("É uma vogal"); break;
        case 'i': printf("É uma vogal"); break;
        case 'o': printf("É uma vogal"); break;
        case 'u': printf("É uma vogal"); break;
        default: printf("É uma consoante");
    }

    return 0;
}
