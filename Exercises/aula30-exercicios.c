//AULA 30 - EXERCICIOS:

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");


int numerojogador, numerocomputador, resultado;
char tipocomparacao;

//Gerar números aleatórios com comando SRAND:
srand(time(0)); //Inicializa números aleatórios por tempo.
numerocomputador = rand() % 100 + 1; // Número entre 1 e 100

//Início do jogo:

printf("---Seja Bem-vindo---\n");
printf("---Escolha um número e o tipo de comparação---\n");
printf("M. Maior.\n");
printf("N. Menor.\n");
printf("I. Igual. \n");

printf("Escolha a comparação: \n");
scanf("%c", tipocomparacao);

printf("Digit um número de 0 a 100: \n");
scanf("%d", numerojogador);

//Exibir o número gerado pelo computador.
printf("O número do computador é: %d\n", numerocomputador);

switch(tipocomparacao){
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior.\n");
        resultado = numerojogador > numerocomputador ? 1 : 0;
    break;
    
    case 'N':
    case 'n':
            printf("Você escolheu a opção Menor.\n");
        resultado = numerojogador < numerocomputador ? 1 : 0;
    
    break;
    
    case 'I':
    case 'i':
            printf("Você escolheu a opção Igual.\n");
        resultado = numerojogador == numerocomputador ? 1 : 0;
    
    break;
    default:
        printf("Opção de jogo inválida. \n");
    break;
    }
    
        printf("O número do computador é: %d e o do jogador é: %d\n", numerocomputador, numerojogador);
    
        if(resultado == 1){
            printf("Você venceu!\n");
        } else {
            printf("Você perdeu...\n");
        }
    

return 0;
}