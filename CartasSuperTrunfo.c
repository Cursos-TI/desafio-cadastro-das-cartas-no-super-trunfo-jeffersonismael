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

    int atributoEscolhido;
    printf("Escolha o Atributo para a Batalha:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &atributoEscolhido);
    printf("*** Batalha de Cartas Super Trunfo ***\n");
    
    switch (atributoEscolhido) {
        case 1:
            if (populacao1 > populacao2) {
                printf("País 1: %s e País 2: %s \nAtributo: População\nPopulação - Carta 1: %d\nPopulação - Carta 2: %d\nCarta 1 venceu!", cidade1, cidade2, populacao1, populacao2);
            } else if (populacao1 < populacao2) {
                printf("País 1: %s e País 2: %s \nAtributo: População\nPopulação - Carta 1: %d\nPopulação - Carta 2: %d\nCarta 2 venceu!", cidade1, cidade2, populacao1, populacao2);
            } else {
                printf("País 1: %s e País 2: %s \nAtributo: População\nPopulação - Carta 1: %d\nPopulação - Carta 2: %d\nEmpate!", cidade1, cidade2, populacao1, populacao2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("País 1: %s e País 2: %s \nAtributo: Área\nÁrea - Carta 1: %.2f\nÁrea - Carta 2: %.2f\nCarta 1 venceu!", cidade1, cidade2, area1, area2);
            } else if (area1 < area2) {
                printf("País 1: %s e País 2: %s \nAtributo: Área\nÁrea - Carta 1: %.2f\nÁrea - Carta 2: %.2f\nCarta 2 venceu!", cidade1, cidade2, area1, area2);
            } else {
                printf("País 1: %s e País 2: %s \nAtributo: Área\nÁrea - Carta 1: %.2f\nÁrea - Carta 2: %.2f\nEmpate!", cidade1, cidade2, area1, area2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("País 1: %s e País 2: %s \nAtributo: PIB\nPIB - Carta 1: %.2f\nPIB - Carta 2: %.2f\nCarta 1 venceu!", cidade1, cidade2, pib1, pib2);
            } else if (pib1 < pib2) {
                printf("País 1: %s e País 2: %s \nAtributo: PIB\nPIB - Carta 1: %.2f\nPIB - Carta 2: %.2f\nCarta 2 venceu!", cidade1, cidade2, pib1, pib2);
            } else {
                printf("País 1: %s e País 2: %s \nAtributo: PIB\nPIB - Carta 1: %.2f\nPIB - Carta 2: %.2f\nEmpate!", cidade1, cidade2, pib1, pib2);
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("País 1: %s e País 2: %s \nAtributo: Pontos Turísticos\nPontos Turísticos - Carta 1: %d\nPontos Turísticos - Carta 2: %d\nCarta 1 venceu!", cidade1, cidade2, pontosTuristicos1, pontosTuristicos2);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("País 1: %s e País 2: %s \nAtributo: Pontos Turísticos\nPontos Turísticos - Carta 1: %d\nPontos Turísticos - Carta 2: %d\nCarta 2 venceu!", cidade1, cidade2, pontosTuristicos1, pontosTuristicos2);
            } else {
                printf("País 1: %s e País 2: %s \nAtributo: Pontos Turísticos\nPontos Turísticos - Carta 1: %d\nPontos Turísticos - Carta 2: %d\nEmpate!", cidade1, cidade2, pontosTuristicos1, pontosTuristicos2);
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("País 1: %s e País 2: %s \nAtributo: Densidade Populacional\nDensidade Populacional - Carta 1: %.2f\nDensidade Populacional - Carta 2: %.2f\nCarta 1 venceu!", cidade1, cidade2, densidade1, densidade2);
            } else if (densidade1 > densidade2) {
                printf("País 1: %s e País 2: %s \nAtributo: Densidade Populacional\nDensidade Populacional - Carta 1: %.2f\nDensidade Populacional - Carta 2: %.2f\nCarta 2 venceu!", cidade1, cidade2, densidade1, densidade2);
            } else {
                printf("País 1: %s e País 2: %s \nAtributo: Densidade Populacional\nDensidade Populacional - Carta 1: %.2f\nDensidade Populacional - Carta 2: %.2f\nEmpate!", cidade1, cidade2, densidade1, densidade2);
            }
            break;
        default:
            printf("Atributo inválido!");
            break;
    }
    /*
    printf("*** Resultado da Batalha ***\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    printf("Comparação de cartas (Atributo: Super Poder)\n");
    printf("Carta 1 - %s: (%s) %.0f\n", cidade1, estado1, superPoder1);
    printf("Carta 2 - %s: (%s) %.0f\n", cidade2, estado2, superPoder2);
    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    */
    return 0;
}
