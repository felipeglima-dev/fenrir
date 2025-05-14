// AULA 38: EXERCÍCIOS : VETORES E MATRIZES COM LOOPS: 


#include <stdio.h>
#include<locale.h>

/* Usando define, é possível lidar com valores constantes, tornando o código mais limpo. Sem repetições*/
    #define LINHAS 5
    #define COLUNAS 5


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int matriz [LINHAS][COLUNAS];
    int soma = 0;

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}