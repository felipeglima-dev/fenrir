//AULA 28: EXERCÍCIOS: JOGO JO-KEN-PO:

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolhajogador, escolhacomputador;
    srand(time(0));
    
    printf(" ### JO-KEN-PO ### \n");
    printf("Escolha uma opção: \n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogador);
    
    escolhacomputador = rand() % 3 + 1;
    
    switch(escolhajogador){
    case 1:
        printf("Jogador: Pedra - ");
    break;
    case 2:
        printf("Jogador: Papel - ");
    break;
    case 3:
        printf("Jogador: Tesoura - ");
    break;
    default:
        printf("Opção Inválida.\n");
    }
    
    switch(escolhacomputador){
    case 1:
        printf("Computador: Pedra - ");
    break;
    case 2:
        printf("Computador: Papel - ");
    break;
    case 3:
        printf("Computador: Tesoura - ");
    break;
    
    }
    
    if(escolhacomputador == escolhajogador){
        printf("### EMPATOU!! ###\n");
    } else if ((escolhajogador == 1) && (escolhacomputador == 3) ||
    (escolhajogador == 2) && (escolhacomputador == 1) ||
    (escolhajogador == 3) && (escolhacomputador == 2))
    {
        printf("### PARABÉNS! VOCÊ VENCEU! ###\n");
    } else {
        printf("### QUE PENA, VOCÊ PERDEU... ###\n");
    }

return 0;

}