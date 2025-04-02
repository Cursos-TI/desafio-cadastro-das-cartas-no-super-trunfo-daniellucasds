#include <stdio.h>

int main() {

// Variáveis para Carta 1
    char Estado1[3], cod_carta1[10], Nome_cidade1[35];
    int populacao1, turisticos1;
    float area1, pib1;

// Variáveis para Carta 2
    char Estado2[3], cod_carta2[10], Nome_cidade2[35];
    int populacao2, turisticos2;
    float area2, pib2;

// Coleta de dados para Carta 1
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", Estado1);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta1); 

    printf("Digite o nome da cidade: ");
    scanf("%s", Nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos1);

// Coleta de dados para Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", Estado2);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", Nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);

// Impressão dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", Nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1); 
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", Nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0;
}