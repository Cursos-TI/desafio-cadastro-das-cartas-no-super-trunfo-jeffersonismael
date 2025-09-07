#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo - Nível Novato\n");

    char estado1[1], estado2[1], cidade1[8], cidade2[8];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf("Carta 1:\nDigite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Carta 1:\nEstado: %s\nCódigo: %s01\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, estado1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("Carta 2:\nDigite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Carta 2:\nEstado: %s\nCódigo: %s02\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}
