/* EXERCICIO 3: Seção 7

Construa um algoritmo que leia 10 valores inteiro e positivos:
- Encontre o maior valor
- Encontre o menor valor
- Calcule a média dos números lidos.

Entrada:

valor menor = 0
valor maior = 0
soma = 0
N = 0

Processamento:

Para N = 0, enquanto N < 10, processar
	receber valor
	enquanto valor <, 0 processar
	escreva informe valor positivo
	se valor > valor maior então
	valor maior = valor
	se valor < valor menor então
	valor menor = valor
	soma = soma + valor

Saída:

media = soma / 2

Escrever maior...
Escrever menor...
Escrever média...

    */

#include <stdio.h> 
#include<locale.h>

int main() { 
  setlocale(LC_ALL, "Portuguese_Brazil.1252"); //Localidade exata do Brasil. Troca ponto por vírgula tb.

//Entrada:

int valor_menor = 999, valor_maior = -999, valor, soma = 0;
float media;

//Processamento:

for (int i = 0; i < 10; i++){
    printf("Por favor, insira um valor: \n");
    scanf("%d", &valor);
    if(valor > 0){
        if(valor > valor_maior){
            valor_maior = valor;
                } if(valor < valor_menor){
                        valor_menor = valor;
                    }
                    soma = soma + valor;
                } else {
                    i--;
            }
        }

media = soma / 10;

printf("A média dos valores é %.2f\n", media);
printf("O maior valor é %d", valor_maior);
printf("O menor valor é %d", valor_menor);

return 0;
}