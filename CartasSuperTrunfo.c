#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo - Nível Mestre\n");

    char estado1[8], estado2[8], cidade1[8], cidade2[8];
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

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

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1/densidade1);

    printf("Carta 1:\nEstado: %s\nCódigo: %s01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\n", estado1, estado1, cidade1, populacao1, area1);
    printf("PIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", pib1, pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);

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

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1/densidade2);

    printf("Carta 2:\nEstado: %s\nCódigo: %s02\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\n", estado2, estado2, cidade2, populacao2, area2);
    printf("PIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);

    printf("*** Resultado da Batalha ***\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    printf("Comparação de cartas (Atributo: Super Poder)\n");
    printf("Carta 1 - %s: (%s) %f\n", cidade1, estado1, superPoder1);
    printf("Carta 2 - %s: (%s) %f\n", cidade2, estado2, superPoder2);
    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    return 0;
}
