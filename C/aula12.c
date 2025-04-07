//AULA 12: Conversão e Manipulação de dados:

#include<stdio.h>

int main(){
   
     // Número Inteiros: %d
    int a = 10;
    int b = 3;

    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente); //Ele dá um resultado em inteiro

    //Números flutuantes/decimais: %f
    float y = 5.5;
    float x = 2.2;

    float soma02 = x + y;
    float diferenca02 = x - y;
    float produto02 = x * y;
    float quociente02 = x / y;

    printf("Soma: %.2f\n", soma02);
    printf("Diferença: %.2f\n", diferenca02);
    printf("Produto: %.2f\n", produto02);
    printf("Quociente: %.2f\n", quociente02);

}

