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
    int opcao1, opcao2;
    int pontos1 = 0, pontos2 = 0;

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

   printf("Menu interativo. \n Escolha duas opcoes.\n\nPrimeira opcao: "); 
   printf("\n0. Populacao\n1. Area\n2. PIB.\n3. Ponto Turistico.\n4. Densidade.\n"); 
   scanf("%d", &opcao1); 
  
  
   switch (opcao1) {
        case 0:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Populacao: %d vs %d\n", populacao1, populacao2);
            (populacao1 > populacao2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 1:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Area: %.2f vs %.2f\n", area1, area2);
            (area1 > area2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 2:
            printf("%s Vs %s\n", nome1, nome2);
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            (pib1 > pib2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 3:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Pontos turisticos: %d vs %d\n", PontoTuristico1, PontoTuristico2);
            (PontoTuristico1 > PontoTuristico2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 4:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Densidade: %.2f vs %.2f\n", densidade1, densidade2);
            (densidade1 < densidade2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    printf("\nEscolha a segunda opcao (a primeira nao aparece):\n");
    if (opcao1 != 0) printf("0. Populacao\n");
    if (opcao1 != 1) printf("1. Area\n");
    if (opcao1 != 2) printf("2. PIB\n");
    if (opcao1 != 3) printf("3. Ponto Turistico\n");
    if (opcao1 != 4) printf("4. Densidade\n");
    scanf("%d", &opcao2);

    switch (opcao2) {
        case 0:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Populacao: %d vs %d\n", populacao1, populacao2);
            (populacao1 > populacao2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 1:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Area: %.2f vs %.2f\n", area1, area2);
            (area1 > area2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 2:
            printf("%s Vs %s\n", nome1, nome2);
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            (pib1 > pib2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 3:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Pontos turisticos: %d vs %d\n", PontoTuristico1, PontoTuristico2);
            (PontoTuristico1 > PontoTuristico2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        case 4:
            printf("%s Vs %s\n", nome1, nome2);
            printf("Densidade: %.2f vs %.2f\n", densidade1, densidade2);
            (densidade1 < densidade2) ? (printf("Carta 1 venceu!\n"), pontos1++) : (printf("Carta 2 venceu!\n"), pontos2++);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    printf("\nResultado:\nCarta 1: %d pontos\nCarta 2: %d pontos\n", pontos1, pontos2);
    if (pontos1 > pontos2) printf(" Carta 1 Venceu!\n");
    else if (pontos2 > pontos1) printf(" Carta 2 Venceu!\n");
    else printf("Empate!\n");

    return 0;
}
