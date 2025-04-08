//AULA 15: MODIFICADORES DE TIPOS DE DADOS:

#include<stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "portuguese_Brazil");

    //UNSIGNED:
    int numeroSinal = 3000000000; //Valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal); //Usa-se especificador %u

    //LONG:
    int numeroNormal = 2147483647; //valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número Grande (long long int): %lld\n", numeroGrande); //Usa-se especificador %ld ou %lld
    
    numeroGrande = 2147483648; //Valor maior que o máximo de int
    printf("Número Grande Atualizado (long long int): %lld\n", numeroGrande);

    //DOUBLE:

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793;

    printf("Número Preciso (Double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (Long Double): %21Lf\n", numeroMuitoPreciso);

    return 0;