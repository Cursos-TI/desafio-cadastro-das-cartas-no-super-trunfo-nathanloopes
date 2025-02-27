#include <stdio.h>

int main() {
    int Pturisticos, cd_cidade, populacao; 
    float altura, area, pib;
    char estado[3], cidade[70];

    int Pturisticos2, cd_cidade2, populacao2; 
    float altura2, area2, pib2;
    char estado2[3], cidade2[70];

    printf("Numero da carta: 1\n");

    printf("Digite o estado de origem: ");
    scanf("%s", estado);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("Codigo da cidade: ");
    scanf("%d", &cd_cidade);

    printf( "quantidade de pontos turisticos:");
    scanf("%d", &Pturisticos);
    
    printf("Numero de habitantes: ");
    scanf("%d", &populacao);

    printf("Area Km²: ");
    scanf("%f", &area);

    printf("Pib da cidade: ");
    scanf("%f", &pib);


          ("Estado: %s\n", estado);
          ("Cidade: %s\n", cidade);


    printf("Codigo da cidade: %d\n", cd_cidade);
          ("pontos turisticos: %d\n", Pturisticos);
          ("Populacao da cidade: %d\n", populacao);


    printf("Area km²: %.3f\n", area);
    printf ("Valor do PIB: %.3f bilhões de reais\n", pib);



    printf("Numero da carta: 2\n");

    printf("Digite o estado de origem: ");
    scanf("%s", estado2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Codigo da cidade: ");
    scanf("%d", &cd_cidade2);

    printf( "quantidade de pontos turisticos:");
    scanf("%d", &Pturisticos2);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Area Km²: ");
    scanf("%f", &area2);

    printf("Pib da cidade: ");
    scanf("%f", &pib2);

          ("Estado: %s\n", estado2);
          ("Cidade: %s\n", cidade2);


    printf("Codigo da cidade: %d\n", cd_cidade2);
          ("pontos turisticos: %d\n", Pturisticos2);
          ("Populacao da cidade: %d\n", populacao2);


    printf("Area km²: %.3f\n", area2);
    printf ("Valor do PIB: %.3f bilhões de reais\n", pib2);

}