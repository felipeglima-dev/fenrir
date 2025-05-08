//AULA 24: EXERCÍCIOS PRÁTICOS: ESTRUTURA ENCADEADA/ANINHADA:

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

//Condição 01: O peso mínimo deve ser <= 50 e >=70 - imprime "Você tem o peso ideal para participar do campeonato. "
//Condição 02: A altura mínima deve ser >=1.65 - imprime "Você tem a altura ideal para participar do campeonato"
//Condição 03: A idade deve ser entre >=16 e <40 - imprime "Você a idade ideal para participar do campeonato"

int idade;
float peso;
float altura;

printf("Qual é a sua idade? \n");
scanf("%d", &idade);
printf("Quanto você pesa?\n");
scanf("%f", &peso);
printf("Quanto você mede? \n");
scanf("%f", &altura);

if (idade >=16 && idade <=40){
    if (peso >=50.0 && peso <=70.0){
        if(altura >=170 && altura <=190){
            printf ("Você tem todos os requisitos.\n");
        } else {
            printf ("Você não tem a altura necessária.\n");
        } 

        } else {
            printf("Você não tem o peso necessário.\n");
        }
    } else {
        printf("Você não tem a idade necessária.\n");
    }
return 0;
}