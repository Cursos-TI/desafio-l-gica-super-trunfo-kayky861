#include <stdio.h>
int main () {

    char estado1, estado2;
    char codigo1 [4], codigo2[4];
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int PontoTuristico1, PontoTuristico2;
    float densidade1, densidade2, pibper1, pibper2;
    float superpoder1, superpoder2;

    printf("Super trunfo, insira os dados das cartas.\n\nCarta 1.\n\n");
    printf("letra do estado (A - H): ");
    scanf(" %c", &estado1);
    
    printf("codigo  (EX: A01): ");
    scanf("%s", codigo1);
    printf("cidade: ");
    scanf("%s", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontoTuristico1);

    densidade1 = populacao1 / area1;
    pibper1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + PontoTuristico1 + pibper1 + (1 / densidade1);


    printf("\nCarta 2.\n\nletra do estado (A - H): ");
    scanf(" %c", &estado2);
    printf("codigo (EX: A01): ");
    scanf("%s", codigo2);
    printf("cidade: ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontoTuristico2);

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + PontoTuristico2 + pibper2 + (1 / densidade2);


    printf("\nComparacao de cartas (Populacao).\n");
    printf("Carta 1 - %s: %d. " , nome1, populacao1);
    printf("Carta 2 - %s: %d. " , nome2, populacao2);

    printf("\nResultado: Carta %d (%s) venceu",
    populacao1 > populacao2 ? 1 : 2,
    populacao1 > populacao2? nome1 : nome2);
    
}