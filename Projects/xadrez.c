#include <stdio.h>
#include<locale.h>

// Desafio de Xadrez - MateCheck -Tema 3 - Desafio Mestre:

//----------- Aplicando Recursividade para o movimento das peças -----------

//Recursividade para o movimento da Torre: Move 5 casas para a direita

void movimentotorre(int casatorre) {

    if (casatorre > 0) {
        printf("Movendo Torre para direita. \n", casatorre);
        movimentotorre(casatorre - 1);
    }
}

//Recursivida para o movimento da Rainha: Move 8 casas para a esquerda

void movimentorainha(int casarainha) {

    if (casarainha > 0) {
        printf("Movendo Rainha para esquerda. \n", casarainha);
        movimentorainha(casarainha - 1);
    }
}

//Recursividade para o movimento do Bispo com estrutura aninhada FOR: Move 5 casas na diagonal (Cima + Direita)

void movimentobispo (int casabispo) {

    if (casabispo > 0) {
        if (casabispo > 0) {
            printf("Movendo Bispo para cima. \n");
        }
        movimentobispo(casabispo - 1);
        printf("Movendo Bispo para direita. \n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

// Menu Principal do jogo de Xadrez:

    int option;
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int casacavalo1;
    int casacavalo2;

    do{
        printf("\n---- Menu Principal: Xadrez ----\n");
        printf("Escolha uma das opções abaixo: \n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        scanf("%d", &option);

//----------- Variáveis e Valores para Recursividade das peças -----------

            switch(option){
                case 1:
                //Resultados para Recursividade: Bispo, Rainha, Torre: 
                    printf("\n---------------------\n");
                    printf("Você escolheu Torre. Computando...: \n");
                    movimentotorre(torre);
                    printf("\n---------------------\n"); 
                break;
                case 2:
                    printf("\n---------------------\n");
                    printf("\nVocê escolheu Bispo. Computando...: \n");
                    movimentobispo(bispo);
                    printf("\n---------------------\n");
                break;
                case 3:
                    printf("\n---------------------\n"); 
                    printf("\nVocê escolheu Rainha. Computando...: \n");
                    movimentorainha(rainha);
                    printf("\n---------------------\n"); 
                break;
                case 4: 
                //Aplicando estruturas aninhadas para o movimento do Cavalo em L.
                    printf("\nVocê escolheu Cavalo. Computando...: \n");
                        for ( casacavalo2 = 0; casacavalo2 < 1 ; casacavalo2++){
                            for (casacavalo1 = 0; casacavalo1 < 2; casacavalo1++)
                                printf("Movendo Cavalo para cima... \n");
                            }
                        printf("Movendo Cavalo para direita... \n");
                break;
                }
            } while (option != 4 && option != 3 && option != 2 && option != 1);  
    
    return 0;
}