#include <stdio.h>

int main() {
    // Váriaveis Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Váriaveis Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // entrada Carta 1
    printf("--- Cartas do Jogo ---\n");
    printf("--- Digite os atributos das cartas ---\n\n");
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // entrada Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcular Densidade Populacional e PIB per capita.
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados das cartas para o usuário
    printf("\n--- Cartas do Jogo ---\n");
    printf("Carta 1: %s (%s) [%s]\n", nomeCidade1, estado1, codigo1);
    printf("  Populacao: %d\n", populacao1);
    printf("  Area: %.2f km2\n", area1);
    printf("  PIB: R$%.2f bilhoes\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("  Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("  PIB per capita: R$%.2f\n\n", pib_per_capita1);

    printf("Carta 2: %s (%s) [%s]\n", nomeCidade2, estado2, codigo2);
    printf("  Populacao: %d\n", populacao2);
    printf("  Area: %.2f km2\n", area2);
    printf("  PIB: R$%.2f bilhoes\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("  Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("  PIB per capita: R$%.2f\n\n", pib_per_capita2);

    int atributo_a_comparar = 1; 

    printf("===================================================\n");
    printf("              RESULTADO DA COMPARACAO\n");
    printf("===================================================\n");


    // Estrutura de decisão para selecionar o atributo a ser comparado
    if (atributo_a_comparar == 1) {
        printf("Comparacao de cartas (Atributo: Populacao):\n");
        printf("  Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
        printf("  Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);
        printf("\n");

        // Requisito 4: Determinar a carta vencedora [cite: 279]
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo_a_comparar == 4) {
        printf("Comparacao de cartas (Atributo: Densidade Populacional):\n");
        printf("  Carta 1 - %s (%s): %.2f hab/km2\n", nomeCidade1, estado1, densidade1);
        printf("  Carta 2 - %s (%s): %.2f hab/km2\n", nomeCidade2, estado2, densidade2);
        printf("\n");

        // Para Densidade Populacional, a carta com o menor valor vence 
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu! (Menor densidade)\n", nomeCidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu! (Menor densidade)\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("===================================================\n");

    return 0;
}