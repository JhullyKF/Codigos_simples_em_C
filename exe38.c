/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[10];
    char auxiliar[10];
    int i, j = 0, cont;
    
    printf("Digite uma palavra: ");
    scanf(" %s", palavra);
    
    for(i=strlen(palavra)-1; i>=0; i--){
        auxiliar[i] = palavra[j];
        j++;
        
        if(auxiliar[i] != palavra[i]){
            cont++;
        }
    }
    if(cont!=0){
        printf("Não é um palíndromo");
    } else {
        printf("É um palíndromo");
    }
    return 0;
}
