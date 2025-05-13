/*DESAFIO SUPER TRUNFO - TEMA 2 - NÍVEL MESTRE.*/

#include<stdio.h>
#include<locale.h>
   
    int main(){

        /*Localizando formato de código para eventuais problemas de acentuação.
        */
        setlocale(LC_ALL, "Portuguese_Brazil");

        /*Menu Interativo por Switch para navegar pelo jogo Super Trunfo*/

        /* Variáveis do Menu Principal:*/

        int opcao;
        int regras1;

        /*Saída inicial com as opções para usuário.*/

        printf("\n--------- SEJA BEM-VINDO AO JOGO SUPER TRUNFO ----------\n");
        printf("--------- MENU PRINCIPAL ----------\n");
        printf("\n Escolha uma das opções abaixo:\n");
        printf("1. Regras:\n");
        printf("2. Iniciar Jogo:\n");
        printf("3. Sair:\n");
        scanf("%d",&opcao);
    
        /*Bloco de código do menu principal. Modo switch.*/

        switch(opcao){ /* Início do Switch principal do jogo.*/
            printf("\n---------REGRAS----------\n");
            printf("---------Por favor, escolha entre a opção 1 e 2----------\n");
            scanf("%d", &regras1);
                    switch (regras1){
                    case 1: 
                            printf("---------1º REGRA----------\n");
                            printf("Você deve inserir as informações correspondentes às duas cartas Super Trunfo quando for solicitado pelo Terminal.\n");
                    break;
                    case 2:
                            printf("---------2º REGRA----------\n");
                            printf("Você deverá escolher atributos para batalhar quando for solicitado pelo terminal.\n");
                    break;
                    default: 
                            printf("Operação Inválida! Por favor, escolha opções entre 1 e 2.\n");
                    break;
                    }
            case 2: 
            printf("\n--------- Iniciando ----------\n");

        /* Variáveis referentes à Primeira Carta.*/

                    char codigo_estado1[90];
                    char pais1[90];
                    char estado1[90];
                    char codigo_cidade1[90];
                    char cidade1[100];
                    float populacao1, area1, pib1;
                    int nturismo1;
                    float densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1;
                    double superpoder_1;

        /*Entrada de dados pelo usuário da Primeira Carta.*/

                printf("\n--------- Computando Informações ----------\n");
                printf("\nCadastre a Primeia Carta ----------\n");
               

                printf("\nInsira o país correspondente:\n");
                scanf(" %[^\n]", pais1);

                printf("Insira o código do Estado de A a C: Ex.(A):\n");
                scanf(" %[^\n]", codigo_estado1);
        
                printf("Insira o Nome do Estado:\n");
                scanf(" %[^\n]", estado1);

                printf("Insira o Código da Carta de A a C entre 0 e 4: Ex.(A01):\n"); 
                scanf(" %[^\n]", codigo_cidade1);

                printf("Insira o nome da cidade:\n"); 
                scanf(" %[^\n]", cidade1);
       
                printf("Insira o Nº Populacional:\n"); 
                scanf("%f", &populacao1);

                printf("Insira a Área Total da cidade:\n");
                scanf( "%f", &area1);

                printf("Insira o PIB referente:\n");
                scanf("%f", &pib1);

                printf("Nº de Pontos Turísticos:\n");
                scanf("%d", &nturismo1);

        /* Cálculos referentes à Primeira Carta. */

                    densidade_populacional1 = populacao1 / area1;
                    pib_per_capita1 = pib1 / populacao1;
                    inverso_densidade_populacional1 = 1 / densidade_populacional1;
                    superpoder_1 = populacao1 + area1 + pib1 + (float) nturismo1 +
                    pib_per_capita1 + inverso_densidade_populacional1;

        
        /*Saída de Dados da Primeira Carta.*/

                printf("País: %s\n", pais1);
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
                printf(".....Computando..... \n");
                printf("Primeira Carta cadastrada com sucesso! ----------\n");
                printf("\n-----------------------------------\n");

        /* Variáveis referentes à Segunda Carta.*/

                    char codigo_estado2[90];
                    char pais2[90];
                    char estado2[90];
                    char codigo_cidade2[90];
                    char cidade2[100];
                    float populacao2, area2, pib2;
                    int nturismo2;
                    float densidade_populacional2, pib_per_capita2, inverso_densidade_populacional2;
                    double superpoder_2;


        /* Entrada de dados pelo usuário da Segunda carta.*/

                printf("\nCadastre a Segunda Carta ----------\n");

                printf("\nInsira o país correspondente:\n");
                scanf(" %[^\n]", pais2);

                printf("Insira o código do Estado entre D e F: Ex.(D):\n");
                scanf(" %[^\n]", codigo_estado2);

                printf("Insira o Nome do Estado:\n");
                scanf(" %[^\n]", estado2);

                printf("Insira o Código da Carta de D e F entre 5 a 7: Ex.(D02):\n"); 
                scanf(" %[^\n]", codigo_cidade2);

                printf("Insira o nome da cidade:\n"); 
                scanf(" %[^\n]", cidade2);

                printf("Insira o Nº Populacional:\n"); 
                scanf("%f", &populacao2);

                printf("Insira a Área Total da cidade:\n");
                scanf( "%f", &area2);

                printf("Insira o PIB referente:\n");
                scanf("%f", &pib2);

                printf("Nº de Pontos Turísticos:\n");
                scanf("%d", &nturismo2);

        /*Cálculos referentes à Segunda Carta.*/

                    densidade_populacional2 = populacao2 / area2;
                    pib_per_capita2 = pib2 / populacao2;
                    inverso_densidade_populacional2 = 1 / densidade_populacional2;
                    superpoder_2 = populacao2 + area2 + pib2 + (float) nturismo2 +
                    pib_per_capita2 + inverso_densidade_populacional2;

        /*Saída de dados referentes à Segunda Carta:*/

                printf("País: %s\n", pais2);
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
                printf(".....Computando..... \n");
                printf("Segunda Carta cadastrada com sucesso! ----------\n");
                printf("\n----------------- Você já pode batalhar! ------------------\n");

        /* Menu secundário para 1ª batalha de cartas escolhidas pelo usuário:*/
    
                printf("\n---------- Iniciando 1º Batalha -----------\n");

                    int escolha;

        /*Escolha de um atributo pelo usuário para batalhar.*/

                printf("\n--------- 1. MENU SUPER TRUNFO ----------\n");
                printf("\n");
                printf("Por favor, escolha um dos atributos abaixo para batalhar:\n");
                printf("1. População:\n");
                printf("2. Área Total:\n");
                printf("3. PIB:\n");
                printf("4. Nº de Pontos Turísticos;\n");
                printf("5. Densidade Demográfica:\n");
                scanf("%d", &escolha);

        /*Switch de atributos para batalha de duas cartas.*/

                        switch(escolha){
                            case 1:
                                printf("1. Atributo Escolhido: População:\n");
                                printf("Primeira Carta: País: %s --- Cidade: %s\n", pais1, cidade1);
                                printf("Segunda Carta: País: %s --- Cidade: %s\n", pais2, cidade2);
                            if(populacao1 > populacao2){
                                printf("--- Resultado: A Primeira Carta: País: - %s -- Cidade: - %s - VENCEU! ---\n", pais1, cidade1);
                            } else if (populacao1 < populacao2) {
                                printf("--- Resultado: A Segunda Carta: País: - %s -- Cidade: - %s - VENCEU! ---\n", pais2, cidade2);
                            } else {
                                printf("--- Resultado: EMPATOU!! ---\n");
                            }
                            break;
                            case 2:
                                printf("1. Atributo Escolhido: Área Total:\n");
                                printf("Primeira Carta: País: %s --- Cidade: %s\n", pais1, cidade1);
                                printf("Segunda Carta: País: %s --- Cidade: %s\n", pais2, cidade2);
                            if(area1 > area2){
                                printf("--- Resultado: Primeira Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais1, cidade1);
                            } else if (area1 < area2) {
                                printf("--- Resultado: Segunda Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais2, cidade2);
                            } else {
                                printf("--- Resultado: EMPATOU!! ---\n");
                            }
                            break;
                            case 3:
                                printf("1. Atributo Escolhido: PIB:\n");
                                printf("Primeira Carta: País: %s --- Cidade: %s\n", pais1, cidade1);
                                printf("Segunda Carta: País: %s --- Cidade: %s\n", pais2, cidade2);
                            if(pib1 > pib1){
                                printf("--- Resultado: Primeira Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais1, cidade1);
                            } else if (pib1 < pib2) {
                                printf("--- Resultado: Segunda Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais2, cidade2);
                            } else {
                                printf("--- Resultado: EMPATOU!! ---\n");
                            }
                            break;
                            case 4:
                                printf("1. Atributo Escolhido: Nº de Pontos Turísticos:\n");
                                printf("Primeira Carta: País %s --- Cidade %s\n", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s\n", pais2, cidade2);
                            if(nturismo1 > nturismo2){
                                printf("--- Resultado: Primeira Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais1, cidade1);
                            } else if (nturismo1 < nturismo2) {
                                printf("--- Resultado: Segunda Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais2, cidade2);
                            } else {
                                printf("--- Resultado: EMPATOU!! ---\n");
                            }
                            break;
                            case 5:
                                printf("1. Atributo Escolhido: Densidade Demográfica:\n");
                                printf("Primeira Carta: País %s --- Cidade %s\n", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s\n", pais2, cidade2);
                            if(densidade_populacional1 < densidade_populacional2){
                                 printf("--- Resultado: Primeira Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais1, cidade1);
                            } else if (densidade_populacional1 > densidade_populacional2) {
                                printf("--- Resultado: Segunda Carta: País: %s -- Cidade: - %s - VENCEU! ---\n", pais2, cidade2);
                            } else {
                                printf("--- Resultado: EMPATOU!! ---\n");
                            }
                            break;
                            default:
                                printf("Operação Inválida. Por favor, escolha uma opção de 1 a 5.\n");
                            break;
                            } //Fim do switch de escolha da 1ª batalha.


        /*Entrada no terminal para segunda batalha entre dois atributos.*/
            
                    printf("\n---------- Iniciando 2º Batalha -----------\n");
                           
        /*Variáveis necessárias para escolha do menu da 2ª batalha.*/
                        
                    int opcao1, opcao2;
                    float somacarta1, somacarta2;
                    float valor1carta1, valor1carta2, valor2carta1, valor2carta2;

        /*Segundo menu de batalha com escolha de dois atributos pelo usuário de duas cartas.*/

        /*Escolha do primeiro atributo das cartas pelo usuário.*/

                    printf("\n--------- 2. MENU SUPER TRUNFO ----------\n");
                    printf("\nPor favor, escolha o Primeiro atributo entre as opções abaixo para batalhar! \n");
                    printf("1. População: \n");
                    printf("2. Área Total:\n");
                    printf("3. PIB:\n");
                    printf("4. Número de Pontos Turísticos;\n");
                    printf("5. Densidade Demográfica:\n");
                    printf("6. Super-Poder: \n");
                    printf("Insira o Primeiro Atributo: \n");
                    scanf("%d", &opcao1);

        /*Escolha do segundo atributo das cartas pelo usuário.*/

                    printf("\nEscolha o Segundo Atributo entre as opções abaixo para batalhar! \n");
                    printf("1. População: \n");
                    printf("2. Área Total:\n");
                    printf("3. PIB:\n");
                    printf("4. Número de Pontos Turísticos;\n");
                    printf("5. Densidade Demográfica:\n");
                    printf("6. Super-Poder: \n");
                    printf("Insira o Segundo Atributo: \n");
                    scanf("%d", &opcao2);

        /* Condição para evitar escolha de um mesmo atributo.*/

                    if(opcao1 == opcao2){
                        printf("Operação inválida. Você deve escolher dois atributos diferentes.\n");
                    } else { 

        /* Atribuição de valores do primeiro atributo escolhido pelo usuário.*/

                            switch(opcao1){
                            case 1: 
                                    valor1carta1 = populacao1; valor1carta2 = populacao2; 
                            break;
                            case 2: 
                                    valor1carta1 = area1; valor1carta2 = area2; 
                            break;
                            case 3: 
                                    valor1carta1 = pib1; valor1carta2 = pib2; 
                            break;
                            case 4: 
                                    valor1carta1 = nturismo1; valor1carta2 = nturismo2; 
                            break;
                            case 5: 
                                    valor1carta1 = densidade_populacional1; valor1carta2 = densidade_populacional2; 
                            break;
                            case 6:
                                    valor1carta1 = superpoder_1; valor1carta2 = superpoder_2;
                            }

        /* Atribuição de valores do segundo atributo escolhido pelo usuário.*/

                            switch(opcao2){
                            case 1: 
                                    valor1carta2 = populacao1; valor2carta2 = populacao2; 
                            break;
                            case 2: 
                                    valor1carta2 = area1; valor2carta2 = area2; 
                            break;
                            case 3: 
                                    valor1carta2 = pib1; valor2carta2 = pib2; 
                            break;
                            case 4: 
                                    valor1carta2 = nturismo1; valor2carta2 = nturismo2; 
                            break;
                            case 5: 
                                    valor1carta2 = densidade_populacional1; valor2carta2 = densidade_populacional2; 
                            break;
                            case 6:
                                    valor1carta2 = superpoder_1; valor2carta2 = superpoder_2;
                                }
                            }

        /* Comparação dos atributos escolhidos.*/ 
        
                    printf("\n--------- Comparando os Atributos Escolhidos ----------\n");
                    printf("\nPrimeiro Atributo: %s\n", 
                        (opcao1 == 1) ? "População" : (opcao1 == 2) ? "Área" : (opcao1 == 3) ? "PIB" : (opcao1 == 4) ? "Pontos Turísticos" : 
                        (opcao1 == 5) ? "Densidade Demográfica" : "Super-Poder");
                    printf("Valor 1 da Primeira Carta: %.2f, Valor 1 da Segunda Carta: %.2f\n", valor1carta1, valor1carta2);

                    printf("Segundo Atributo: %s\n", 
                        (opcao1 == 1) ? "População" : (opcao1 == 2) ? "Área" : (opcao1 == 3) ? "PIB" : (opcao1 == 4) ? "Pontos Turísticos" : 
                        (opcao1 == 5) ? "Densidade Demográfica" : "Super-Poder");
                    printf("Valor 2 da Primeira Carta: %.2f, Valor 2 da Segunda Carta: %.2f\n", valor2carta1, valor2carta2);

        /*Soma dos atributos das cartas em batalha.*/

                    somacarta1 = valor1carta1 + valor2carta1;
                    somacarta2 = valor1carta2 + valor2carta2;

                    printf("\n---- Somando os atributos correspondentes ----:\n");
                    printf("\n Soma da Primeira Carta: %.2f, Soma da Segunda Carta: %.2f\n", somacarta1, somacarta2);

        /*Resultado da segunda batalha.*/

                    if (somacarta1 > somacarta2) {
                        printf("Resultado Final: --- PARABÉNS! A Primeira Carta venceu!\n");
                    } else if (somacarta1 < somacarta2) {
                        printf("Resultado Final: --- PARABÉNS! A Segunda Carta venceu!\n");
                    } else {
                    printf("Resultado Final: As duas cartas empataram!\n");
    }

        /*Continuação do Menu Principal.*/
                    
            break;
            case 3:
                printf("--------- Obrigado por participar! ----------\n");
                printf("--------- Finalizando jogo ----------\n");
            break;
            default:
                printf("Operação Inválida! Por favor, escolha opções entre 1 e 3.\n");
            break;
                           
        }

return 0; 
}
/* Fim do programa.*/



