#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

int resultado1, resultado2;
char primeiroatributo, segundoatributo;
int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

//Gerar número aleatório

srand(time(0));
ataque1 = 1;
ataque2 = 0;
defesa1 = 1;
defesa2 = 0;
recuo1 = 0;
recuo2 = 1;

//Início do jogo:

printf("Bem-vindo ao jogo!\n");
printf("Escolha o primeiro atributo: \n");
printf("A. Ataque\n");
printf("D. Defesa\n");
printf("R. Recuo\n");

printf("Escolha a comparação: \n");
scanf("%c", &primeiroatributo);

switch(primeiroatributo){
    case 'A':
    case 'a':
        printf("Você escolheu opção Ataque\n");
        resultado1 = ataque1 > ataque2 ? 1 : 0;
    break;
    case 'D':
    case 'd':
        printf("Você escolheu opção Defesa\n");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
    break;
    case 'R':
    case 'r':
        printf("Você escolheu opção Recuo\n");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
    break;  
    default: 
        printf("Operação inválida.\n");
    break;  
}

printf("Escolha o segundo atributo: \n");
printf("A. Ataque\n");
printf("D. Defesa\n");
printf("R. Recuo\n");

printf("Escolha a comparação: \n");
scanf("%c", &segundoatributo);

if(primeiroatributo == segundoatributo){
    printf("Você escolheu o mesmo atributo.\n");
} else {
    switch(segundoatributo){
        case 'A':
        case 'a':
            printf("Você escolheu opção Ataque\n");
            resultado2 = ataque1 > ataque2 ? 1 : 0;
        break;
        case 'D':
        case 'd':
            printf("Você escolheu opção Defesa\n");
            resultado2 = defesa1 > defesa2 ? 1 : 0;
        break;
        case 'R':
        case 'r':
            printf("Você escolheu opção Recuo\n");
            resultado2 = recuo1 > recuo2 ? 1 : 0;
    break;  
    default: 
        printf("Operação inválida.\n");
    break;   
    }

if ( resultado1 && resultado2){
    printf("Você venceu!\n");
} else if (resultado1 != resultado2){
    printf("Empatou!\n");
} else {
    printf("Você perdeu\n");
}



}


return 0;
}