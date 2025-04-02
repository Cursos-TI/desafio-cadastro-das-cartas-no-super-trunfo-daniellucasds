#include <stdio.h>

int main() {

//Menu de informações 1
char Estado [2], cod_carta [10], Nome_cidade [35];
int populacao, turisticos;
float area, pib;


//Coleta de Estado 1
    printf("Digite o estado:\n");
    scanf("%s", &Estado);

//Coleta do código da carta 1
    printf("Digite o código da carta:\n");
    scanf("%s", &cod_carta);

//Coleta do nome da cidade 1
    printf("Digite o nome da cidade:\n");
    scanf("%s", &Nome_cidade);

//Coleta da população 1
    printf("Digite a população:\n");
    scanf("%d", &populacao);

//Coleta da área (em km²) 1
    printf("Digite a área (em km²):\n");
    scanf("%f", &area);

//Coleta do PIB 1
    printf("Digite o PIB:\n");
    scanf("%f", &pib);

//Coleta do número de pontos turísticos 1
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos);

//Impressão das variáveis 1
    printf("Carta 1:\n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", cod_carta);
    printf("Nome da cidade: %s \n", Nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", turisticos);

//--------------------------------------------------------------------------------------------------------------------------------------------------


    //Coleta de Estado 2
    printf("Digite o estado:\n");
    scanf("%s", &Estado);

//Coleta do código da carta 2
    printf("Digite o código da carta:\n");
    scanf("%s", &cod_carta);

//Coleta do nome da cidade 2
    printf("Digite o nome da cidade:\n");
    scanf("%s", &Nome_cidade);

//Coleta da população 2
    printf("Digite a população:\n");
    scanf("%d", &populacao);

//Coleta da área (em km²) 2
    printf("Digite a área (em km²):\n");
    scanf("%f", &area);

//Coleta do PIB 2
    printf("Digite o PIB:\n");
    scanf("%f", &pib);

//Coleta do número de pontos turísticos 2
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos);

//Impressão das variáveis 2
    printf("Carta 2:\n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", cod_carta);
    printf("Nome da cidade: %s \n", Nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", turisticos);

    return 0;
}
