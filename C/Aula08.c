// AULA 8: OPERADORES MATEMÁTICOS:

#include<stdio.h>
#include<locale.h>
    int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    /* As quatro operacões aritméticas:

    SOMA: (+)
    SUBTRAÇÃO: (-)
    MULTIPLICAÇÃO: (*)
    DIVISÃ0: (/) 

                                    */

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

//operacao soma - MODULO 1 DADOS DE ENTRADA:


    printf("Insira o primeiro número: \n");
    scanf("%d", &numero1);
    printf("Insira o segundo número: \n");
    scanf("%d", &numero2);


//Modulo DADOS DE SAIDA:

soma = numero1 + numero2;

subtracao = numero1 - numero2;

multiplicacao = numero1 * numero2;

divisao = numero1 / numero2;

printf("A soma é: %d\n", soma);
printf(" A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %d\n", divisao);

    }