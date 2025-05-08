// AULA 26 - USO DE SWITCH - EXERCICIOS:

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    char banco[90];
    int agencia;
    int conta;
    float saldo = 1000;
    int valor;
    
    printf("###Escolha uma opção:###\n");
    printf("1.Verificar Saldo:\n");
    printf("2.Fazer Depósito:\n");
    printf("3.Fazer Saque:\n");
    scanf("%d",&opcao);
    
    switch (opcao){
    case 1:
        printf("O seu saldo é: R$ %f\n", saldo);
    break;
    case 2:
        printf("Digite o banco que você deseja depositar:\n");
        scanf("%s", banco);
        printf("Digite a agência:\n");
        scanf("%d", &agencia);
        printf("Digite a conta que você deseja sacar:\n");
        scanf("%d", &conta);
    break;
    case 3:
        printf("Digite o valor a sacar:\n");
        scanf("%d", &valor);

    break;
    default:
        printf("Opção inválida.\n");

}
return 0;
}