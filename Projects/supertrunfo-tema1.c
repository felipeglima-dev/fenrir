#include<stdio.h>
#include<locale.h>
   
    int main(){
        setlocale(LC_ALL, "Portuguese_Brazil");

        //VARIÁVEIS_01:

        char codigo_estado1[90];
        char estado1[90];
        char codigo_cidade1[90];
        char cidade1[100];
        float populacao1, area1, pib1;
        int nturismo1;
        float densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1;
        double superpoder_1;


        //ENTRADA DE DADOS_01:

        printf("#______________#### DESAFIO SUPERTRUNFO ####______________#\n");
        printf("\n");
        printf("CADASTRE SUA 1º CARTA(01)! \n");
        printf("\n");

        printf("Insira o código do Estado: ");
        scanf(" %[^\n]", codigo_estado1);
        
        printf("Insira o Nome do Estado: ");
        scanf(" %[^\n]", estado1);

        printf("Insira o Código da Carta: "); 
        scanf(" %[^\n]", codigo_cidade1);

        printf("Insira o nome da cidade: "); 
        scanf(" %[^\n]", cidade1);
       
        printf("Insira o Nº Populacional: "); 
        scanf("%f", &populacao1);

        printf("Insira a Área Total da cidade: ");
        scanf( "%f", &area1);

        printf("Insira o PIB referente: ");
        scanf("%f", &pib1);

        printf("Nº de Pontos Turísticos: ");
        scanf("%d", &nturismo1);

        //CÁLCULOS_01:

        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = pib1 / populacao1;
        inverso_densidade_populacional1 = 1 / densidade_populacional1;
        superpoder_1 = populacao1 + area1 + pib1 + (float) nturismo1 +
        pib_per_capita1 + inverso_densidade_populacional1;

        
        //SAÍDA DE DADOS_01:

            printf("Código do Estado: %s\n", codigo_estado1);
            printf("Nome do Estado: %s\n", estado1);
            printf("Código da Carta: %s\n", codigo_cidade1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %.3f Habitantes \n", populacao1);
            printf("Área Total %.3f Km². \n", area1);
            printf("PIB: %.3f Bilhões de Reais \n", pib1);
            printf("São %d pontos turísticos. \n", nturismo1);
            printf("Densidade Populacional: %.3f hab/km²\n", populacao1 / area1);
            printf("PIB per Capita: %.3f reais\n", pib1 / populacao1);
            printf ("Inverso Densidade Populacional: %.3f\n", inverso_densidade_populacional1);
            printf("Super Poder: %.3f pontos\n", superpoder_1);
            printf("Computando..... ");
            printf("CARTA (01) CADASTRADA COM SUCESSO!\n");
            printf("\n");
            printf("-----------------------------------\n");

    //VARIÁVEIS_02:

    char codigo_estado2[90];
    char estado2[90];
    char codigo_cidade2[90];
    char cidade2[100];
    float populacao2, area2, pib2;
    int nturismo2;
    float densidade_populacional2, pib_per_capita2, inverso_densidade_populacional2;
    double superpoder_2;


    //ENTRADA DE DADOS_02:

    printf("\n");
    printf("CADASTRE SUA 2º CARTA(02)! \n");
    printf("\n");

    printf("Insira o código do Estado: ");
    scanf(" %[^\n]", codigo_estado2);

    printf("Insira o Nome do Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Insira o Código da Carta: "); 
    scanf(" %[^\n]", codigo_cidade2);

    printf("Insira o nome da cidade: "); 
    scanf(" %[^\n]", cidade2);

    printf("Insira o Nº Populacional: "); 
    scanf("%f", &populacao2);

    printf("Insira a Área Total da cidade: ");
    scanf( "%f", &area2);

    printf("Insira o PIB referente: ");
    scanf("%f", &pib2);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &nturismo2);

    //CÁLCULOS_02:

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    inverso_densidade_populacional2 = 1 / densidade_populacional2;
    superpoder_2 = populacao2 + area2 + pib2 + (float) nturismo2 +
    pib_per_capita2 + inverso_densidade_populacional2;


    //SAÍDA DE DADOS_02:

        printf("Código do Estado: %s\n", codigo_estado2);
        printf("Nome do Estado: %s\n", estado2);
        printf("Código da Carta: %s\n", codigo_cidade2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %.3f Habitantes \n", populacao2);
        printf("Área Total %.3f Km². \n", area2);
        printf("PIB: %.3f Bilhões de Reais \n", pib2);
        printf("São %d pontos turísticos. \n", nturismo2);
        printf("Densidade Populacional: %.3f hab/km²\n", populacao2 / area2);
        printf("PIB per Capita: %.3f reais\n", pib1 / populacao2);
        printf ("Inverso Densidade Populacional: %.3f\n", inverso_densidade_populacional2);
        printf("Super Poder: %.3f pontos\n", superpoder_2);
        printf("Computando..... ");
        printf("CARTA (02) CADASTRADA COM SUCESSO!\n");
        printf("\n");
        printf("-----------------CARTAS CADATRADAS------------------\n");

//COMPARAÇÃO DE CARTAS (01)X(02):

printf("\n");
printf("----------BATALHA DE CARTAS-----------");
printf("Se receber valor (1) carta 01 vence. Se receber valor (0) carta 02 vence. \n");
printf("População: %f\n", populacao1 > populacao2);
printf("Área Total: %f\n", area1 > area2);
printf("PIB: %f\n", pib1 > pib2);
printf("Pontos Turísticos: %d\n", nturismo1 > nturismo2);
printf("Densidade Populacional: %f\n", densidade_populacional1 < densidade_populacional2);
printf("PIB per Capita: %f\n", pib_per_capita1 > pib_per_capita2 );
printf("Super-Poder: %f", superpoder_1 > superpoder_2);


return 0;

}