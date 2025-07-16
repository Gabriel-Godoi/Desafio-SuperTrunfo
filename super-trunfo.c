#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
// Cálculos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1e9) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9)/ populacao2;

     // Super Poder = soma dos atributos + inverso da densidade
    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);


    // Exibição dos dados formatados
    // Carta 1
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

   
    // Comparações
    int compPopulacao = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compTurismo = pontosTuristicos1 > pontosTuristicos2;
    int compDensidade = densidade1 < densidade2; // menor vence
    int compPIBpc = pibPerCapita1 > pibPerCapita2;
    int compPoder = superPoder1 > superPoder2;

    // Resultados
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta %d venceu (%d)\n", compPopulacao ? 1 : 2, compPopulacao);
    printf("Área: Carta %d venceu (%d)\n", compArea ? 1 : 2, compArea);
    printf("PIB: Carta %d venceu (%d)\n", compPIB ? 1 : 2, compPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", compTurismo ? 1 : 2, compTurismo);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compDensidade ? 1 : 2, compDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", compPIBpc ? 1 : 2, compPIBpc);
    printf("Super Poder: Carta %d venceu (%d)\n", compPoder ? 1 : 2, compPoder);



    return 0;
}
