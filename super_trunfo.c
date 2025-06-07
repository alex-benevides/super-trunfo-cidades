#include <stdio.h>

// Programa Super Trunfo - Cadastro de Cartas de Cidades
int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Instruções e entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (letra de A a H, ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (letra do estado + número de 01 a 04, ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade (ex: São Paulo): ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População (ex: 12325000): ");
    scanf("%d", &populacao1);

    printf("Digite a Área em km² (ex: 1521.11): ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais (ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos (ex: 50): ");
    scanf("%d", &pontosTuristicos1);

    // Instruções e entrada de dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (letra de A a H, ex: B): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (letra do estado + número de 01 a 04, ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade (ex: Rio de Janeiro): ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População (ex: 6748000): ");
    scanf("%d", &populacao2);

    printf("Digite a Área em km² (ex: 1200.25): ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais (ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos (ex: 30): ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}