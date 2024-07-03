/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    printf("Insira a idade: ");
    scanf("%d", &idade);
    
    if(idade <= 0 ){
        printf("Idade inválida");
    }else if((idade >= 4) && (idade <=5)){
        printf("Turma A");
    }else if((idade >= 6) && (idade <=8)){
        printf("Turma B");
    }else if((idade >= 9) && (idade <= 10)){
        printf("Turma C");
    }else{
        printf("Não possui turma");
    }
    return 0;
}
