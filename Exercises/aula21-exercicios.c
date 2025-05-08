//AULA21: INTRODUÇÃO A ESTRUTURA DE DECISÃO
//DECISÃO COMPOSTA: IF/ELSE - EXERCÍCIOS

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

float temperatura, umidade; 
unsigned int estoque, estoqueminimo = 1000;

printf("Entre com a temperatura: \n");
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if(temperatura>30){
    printf("A temperatura está alta.\n");
} else{
    printf("A temperatura está adequada.\n");
}
if(umidade > 50){
    printf("A umidade estará crítica.\n");
} else{
    printf("A umidade está adequada.\n");
}
if(estoque < estoqueminimo){
    printf("O estoque está abaixo do esperado.\n");
} else{
    printf("O estoque está adequado.\n");
}

return 0;
}