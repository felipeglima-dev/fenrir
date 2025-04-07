// AULA 10: INCREMENTO E DECREMENTO:

/*
Operações:

Incremento (++)
pré-incremento (++a)
pós-incremento (a++)
Decremento (--)
pré-decremento (--a)
pós-decremento (a--)

*/

#include<stdio.h>
#include<locale.h>
    
    int main(){
        setlocale(LC_ALL, "portuguese_Brazil");

        int numero1 = 1, resultado;

        printf("Antes do incremento: %d\n", numero1);

        //numero1 = numero1 + 1 ou
        //numero1 += 1
        numero1++;
        printf("Depois do incremento: %d\n", numero1);

        //numero1 = numero1 - 1 ou
        //numero1 -= 1
        numero1--;
        printf("Depois do decremento: %d\n", numero1);

        //Pos-incremento:
        //Resultado = atribui numero1 depois
        //numero1++ recebe incremento
        resultado = numero1++;
        printf("Após pós-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

        //Pre-incremento:
        //++numero1 recebe incremento depois
        //Resultado = atribui numero1
        resultado = ++numero1;
        printf("Após pré-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

        //Pos-decremento:
        //Resultado = atribui numero1 depois
        //numero1-- recebe decremento
        resultado = numero1--;
        printf("Após pos-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);
        
        //Pre-decremento:
        //--numero1 recebe decremento depois
        //Resultado = atribui numero1
        resultado = --numero1;
        printf("Após pré-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);


    }