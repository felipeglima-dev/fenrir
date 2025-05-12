//AULA 33: EXERCÍCIOS DE ESTRUTURA DE REPETIÇÃO:

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

//EXEMPLO DE LOOP WHILE:

int a = 0; //Declara o valor da variável a

while(a <=10){ //Estrutura while onde a deve ser <=10
	if(a % 2 == 0){ //Condição, só números divisíveis por dois com resto zero serão printados.
        printf("O número %d é par!\n", a);//saída de dados
}
    a++; //incremento para criar o loop.
}

//Outro exemplo:

int b = 0; //Declara o valor da variável a

while(b <= 10){ //Estrutura while onde a deve ser <=10
	if(b % 2 != 0){ //Condição, só números diferentes de divisíveis por dois com resto zero serão printados.
        printf("O número %d é impar!\n", b);//saída de dados para números ímpares
}
    b++; //incremento para criar o loop.
}

//EXEMPLO DE LOOP DO-WHILE:

int numero;

do {
	printf("Digite um número par para sair do programa...\n");
	scanf("%d", &numero);

	    if(numero % 2 == 0){
		    printf("O número %d é par.\n", numero); 
        } else {
	        printf("O número %d é ímpar.\n", numero);
}

} while (numero % 2 != 0);
    printf("Você digitou um número par. Saindo do programa...\n");

//EXEMPLO DE LOOP FOR: Calculando a TABUADA.

int valorusuario;
int x;

printf("Digite um número para calcular a tabuada:\n");
scanf("%d", &valorusuario);

    for (x = 0; x <=10; x++)
    {
	printf("%d * %d = %d\n", x, valorusuario, x * valorusuario);
    }

return 0;    
}