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

     // Menu para escolha dos atributos
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: "); scanf("%d", &atributo1);

    // Menu dinâmico: oculta o primeiro atributo escolhido
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Opção: "); scanf("%d", &atributo2);

    // Função para obter valor do atributo
    float valor1A, valor1B, valor2A, valor2B;

    float getValor(int atributo, int carta) {
        switch (atributo) {
            case 1: return carta == 1 ? populacao1 : populacao2;
            case 2: return carta == 1 ? area1 : area2;
            case 3: return carta == 1 ? pib1 : pib2;
            case 4: return carta == 1 ? pontosTuristicos1 : pontosTuristicos2;
            case 5: return carta == 1 ? densidade1 : densidade2;
            default: return 0;
        }
    }

    valor1A = getValor(atributo1, 1);
    valor1B = getValor(atributo2, 1);
    valor2A = getValor(atributo1, 2);
    valor2B = getValor(atributo2, 2);

    // Mostrar os valores
    printf("\n--- Comparação Avançada ---\n");
    printf("%s - %s: %.2f | %s: %.2f\n", nomeCidade1,
           atributo1 == 1 ? "População" :
           atributo1 == 2 ? "Área" :
           atributo1 == 3 ? "PIB" :
           atributo1 == 4 ? "Turismo" : "Densidade",
           valor1A,
           atributo2 == 1 ? "População" :
           atributo2 == 2 ? "Área" :
           atributo2 == 3 ? "PIB" :
           atributo2 == 4 ? "Turismo" : "Densidade",
           valor1B);

    printf("%s - %s: %.2f | %s: %.2f\n", nomeCidade2,
           atributo1 == 1 ? "População" :
           atributo1 == 2 ? "Área" :
           atributo1 == 3 ? "PIB" :
           atributo1 == 4 ? "Turismo" : "Densidade",
           valor2A,
           atributo2 == 1 ? "População" :
           atributo2 == 2 ? "Área" :
           atributo2 == 3 ? "PIB" :
           atributo2 == 4 ? "Turismo" : "Densidade",
           valor2B);

    // Lógica de comparação
    float soma1 = ((atributo1 == 5) ? -valor1A : valor1A) + ((atributo2 == 5) ? -valor1B : valor1B);
    float soma2 = ((atributo1 == 5) ? -valor2A : valor2A) + ((atributo2 == 5) ? -valor2B : valor2B);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    // Operador ternário para resultado final
    printf("\nResultado Final:\n");
    (soma1 > soma2) ? printf("%s venceu!\n", nomeCidade1) :
    (soma2 > soma1) ? printf("%s venceu!\n", nomeCidade2) :
    printf("Empate!\n");



    return 0;
}
