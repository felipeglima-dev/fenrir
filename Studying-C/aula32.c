//AULA 32: ESTRUTURAS DE REPETIÇÃO - WHILE/DO-WHILE/FOR

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

// WHILE: 

int valorA = 1; //Valor da variável

while(valorA <= 10) //Condição importa no loop
{ //Início do bloco
    printf("%d\n", valorA); //Saída de dados
    valorA++; //Incremento da variável para finalizar loop
} //fim do bloco


//Outro exemplo:

    int num;
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num); //Entrada de valor pelo usuário
   
    while (num >= 0) { //Condição de loop
        printf("Você digitou: %d\n", num); //Saída do valor dado pelo usuário

        // Enquanto o usuário colocar valor positivo o loop continua
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num); //Se o usuário insere valor negativo o loop se torna falso e finaliza
    }
   
    // Assim ele pula pro próximo comando fora do bloco.

    printf("Número negativo detectado. Saindo...\n");
   
// DO-WHILE: 

// O código é executado pelo menos uma vez antes da condição. útil para entrada de dados

int num2;

do {
        printf("Digite um número (negativo para sair): "); //Primeiro código executado antes da condição para entrada e usuário
        scanf("%d", &num2);
       
        if (num2 >= 0) { // Estrutura if para definir condição da entrada do usuário
            // Se usuário entra com valor maior ou igual a zero
            printf("Você digitou: %d\n", num2);
        }
    } while (num2 >= 0); //Condição dentro do bloco do while para finalizar o loop caso o usuário entre com valor negativo
   
    printf("Número negativo detectado. Saindo...\n");

//Exemplo de estrutura DO-WHILE com menus interativos

int option;

do { //Execução do bloco switch pelo menos uma vez.
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3 && option !=2 && option !=1); // Enquanto o usuário escolher um valor diferente de 1-2-3, o "menu" repete.

//LOOP FOR:

    for (int c = 0; c<=5; c++){ //Inicialização: c = 0; condição: c>=5; incremento: c++
	printf("%d", c);//Saída de dados

    // O loop ocorre até que a condição é falsa.
} 

for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

