#include <stdio.h>

int main(){
    // váriaveis das cartas
    char pais1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char pais2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    printf("----------Jogo Super Trunfo----------\n");
    printf("--- Digite os atributos das cartas ---\n\n");

    // entrada do usuário da Carta 1:
    printf("Carta 1: \n");
    printf("Pais: \n");
    scanf(" %[^\n]", pais1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // entrada do usuário da Carta 1:
    printf("\nCarta 2: \n");
    printf("Pais: \n");
    scanf(" %[^\n]", pais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular Densidade Populacional e PIB per capita.
    float densidade_pop1 = populacao1 / area1;
    float pib_percapita1 = (pib1 * 1000000000) / populacao1;

    float densidade_pop2 = populacao2 / area2;
    float pib_percapita2 = (pib2 * 1000000000) / populacao2;

    int opcao;

    // exibição dos atributos de cada carta
    printf("\nOs atributos das cartas são:\n");
    
    printf("Carta 1:: %s\n", pais1);
    printf("  Populacao: %d\n", populacao1);
    printf("  Area: %.2f km2\n", area1);
    printf("  PIB: R$ %.2f bilhoes\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("  Densidade Populacional: %.2f hab/km2\n", densidade_pop1);
    printf("  PIB per capita: R$ %.2f\n\n", pib_percapita1);

    printf("Carta 1:: %s\n", pais2);
    printf("  Populacao: %d\n", populacao2);
    printf("  Area: %.2f km2\n", area2);
    printf("  PIB: R$ %.2f bilhoes\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("  Densidade Populacional: %.2f hab/km2\n", densidade_pop2);
    printf("  PIB per capita: R$ %.2f\n\n", pib_percapita2);

    printf("\nEscolha qual atributo você quer batalhar:\n");

    // Menu de seleção para definir qual atributo será comparado entre as cartas.
    printf("\n1. Batalha de População.\n");
    printf("2. Batalha de Área.\n");
    printf("3. Batalha de Pib.\n");
    printf("4. Batalha de Pontos Turísticos.\n");
    printf("5. Batalha de Densidade Populacional.\n");
    printf("6. Batalha de Pib Percapita.\n");
    printf("\nEscolha uma das opções: \n");
    scanf("%d", &opcao);

    printf("\n===================================================\n");
    printf("              RESULTADO DA BATALHA\n");
    printf("===================================================\n");

    // lógica de comparação das cartas, com um else em cada case para o caso de empate.
    switch (opcao) {
    case 1:
        printf("\nA População da Carta 1: %s é %d e da Carta 2: %s é %d. \n", pais1, populacao1, pais2, populacao2);
        if (populacao1 > populacao2){
            printf("A População da Carta 1: %s é maior que da Carta 2: %s. \nCARTA 1 VENCE!\n", pais1, pais2);
        } else if (populacao1 < populacao2){
            printf("A População da Carta 2: %s é maior que da Carta 1: %s. \nCARTA 2 VENCE!\n", pais2, pais1);
        } else {
            printf("Empate! Ninguém venceu.");
        }
        break;
    case 2:
        printf("\nA Área da Carta 1: %s é %f e da Carta 2: %s é %f. \n", pais1, area1, pais2, area2);
        if (area1 > area2){
            printf("A Área da Carta 1: %s é maior que da Carta 2: %s. \nCARTA 1 VENCE!\n", pais1, pais2);
        } else if (area1 < area2){
            printf("A Área da Carta 2: %s é maior que da Carta 1: %s. \nCARTA 2 VENCE!\n", pais2, pais1);                
        } else {
            printf("Empate! Ninguém venceu.");
        }
        break;
    case 3:
        printf("\nO Pib da Carta 1: %s é %f e da Carta 2:: %s é %f. \n", pais1, pib1, pais2, pib2);
        if (pib1 > pib2){
            printf("O Pib da Carta 1: %s é maior que da Carta 2: %s. \nCARTA 1 VENCE!\n", pais1, pais2);
        } else if (pib1 < pib2){
            printf("O Pib da Carta 2: %s é maior que da Carta 1: %s. \nCARTA 2 VENCE!\n", pais2, pais1);
        } else {
            printf("Empate! Ninguém venceu.");
        }
        break;
    case 4:
        printf("\nA quantidade de Pontos Turísticos da Carta 1: %s é %d e da Carta 2: %s é %d. \n", pais1, pontos_turisticos1, pais2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("A quantidade de Pontos Turísticos da Carta 1: %s é maior que da Carta 2: %s. \nCARTA 1 VENCE!\n", pais1, pais2);
        } else if (pontos_turisticos1 < pontos_turisticos2){
            printf("A quantidade de Pontos Turísticos da Carta 2: %s é maior que da Carta 1: %s. \nCARTA 2 VENCE!\n", pais2, pais1);
        } else {
            printf("Empate! Ninguém venceu.");
        }
        break;
    case 5:
         printf("\nA densidade Populacional da Carta 1: %s é %f e da Carta 2: %s é %f. \n", pais1, densidade_pop1, pais2, densidade_pop2);
        if (densidade_pop1 > densidade_pop2){
            printf("A densidade Populacional da Carta 1: %s é menor que da Carta 2: %s. \nCARTA 1 VENCE!\n", pais1, pais2);
        } else if (densidade_pop1 < densidade_pop2){
            printf("A densidade Populacional da Carta 2: %s é menor que da Carta 1: %s. \nCARTA 2 VENCE!\n", pais2, pais1);
        } else {
            printf("Empate! Ninguém venceu.");
        }
        break;
    case 6:
        printf("\nO Pib Percapita da Carta 1: %s é %f e da Carta 2: %s é %f. \n", pais1, pib_percapita1, pais2, pib_percapita2);
        if (pib_percapita1 > pib_percapita2){
            printf("Pib Percapita da Carta 1: %s é maior que da Carta 2: %s. \nCARTA 1 VENCE!\n", pais1, pais2);
        } else if (pib_percapita1 < pib_percapita2){
            printf("Pib Percapita da Carta 2: %s é maior que da Carta 1: %s. \nCARTA 2 VENCE!\n", pais2, pais1);
        } else {
            printf("Empate! Ninguém venceu.");
        }
        break;
        // default para o caso do usuário não selecionar um opção (case) valida.
        default:
            printf("Você não selecionou uma opção valida");
    }

    return 0;

}