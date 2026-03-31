#include <stdio.h>

int main(){

   // ==== carta 1 ====

   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populacao1;
   float area1, pib1;
   int pontosTuristicos1;
   
   // ==== carta 2 ====

   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2, pib2;
   int pontosTuristicos2;

   // == entrada de dados carta 1 ==
   printf("Cadastro da Carta 1\n");

   printf("Estado A a H: ");
   scanf(" %c", &estado1);

   printf("Codigo da carta: ");
   scanf("%s", &codigo1);
   
   printf("Nome da cidade: ");
   scanf(" %[^\n]", cidade1);

   printf("Populacao: ");
   scanf("%d", &populacao1);

   printf("Area (km²): ");
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &pib1);

   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos1);

   // == entrada de dados carta 2 ==
   printf("Cadastro da carta 2 \n");
   
   printf("Estado A a H: ");
   scanf("%c", &estado2);

   printf("Codigo da carta: ");
   scanf("%s", &codigo2);
   
   printf("Nome da cidade: ");
   scanf(" %[^\n]", cidade2);

   printf("Populacao: ");
   scanf("%d", &populacao2);

   printf("Area (km²): ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &pib2);

   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos2);

// == saida dos dados ==
printf("\n Cartas Cadastradas");

// carta 1 
printf(" \nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %2.f km²\n", area1);
printf("PIB: %2.f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

// carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}