/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define PI 3.14
int main()
{
    float volume, raio, altura;
    printf("Insira a altura da lata: ");
    scanf("%f", &altura);
    
    printf("Insira o raio: ");
    scanf("%f", &raio);
    
    volume = PI * (raio*raio) * altura;
    
    printf("O volume da lata é %.2f", volume);
    return 0;
}
