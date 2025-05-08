//AULA 18: EXERCÍCIOS:
//Sistema de gerenciamento de inventário de produtos.

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese_Brazil");

//Declarar produtos:

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

//Valor no estoque: Como não são números negativos, usar unsigned;

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000; //se fossem números altos, aplicar long.

//Valor dos produtos:

    float valorA = 10.50;
    float valorB = 20.40;

// Estoque mínimo dos produtos:

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

//Exibir as informações dos Produtos:

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

//Comparação com valor Mínimo de estoque:

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

// Comparação dos valores totais dos produtos:
//Outra forma de fazer a comparação é direto no printf.

printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", 
    estoqueA * valorA, estoqueB * valorB,
    (estoqueA * valorA) > (estoqueB * valorB));


}