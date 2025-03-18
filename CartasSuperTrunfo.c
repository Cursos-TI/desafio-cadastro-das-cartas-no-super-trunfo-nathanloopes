#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
      int Pturisticos, cd_cidade, populacao, valora, valorb, valorpt, valord, valorpc, valorsp, opcao, comparacao1, comparacao2;
      float altura, area, pib, dencidade, valorpib, vldenpib, spoder, spoder2, valorp, testep, somatotal;
      char estado[3], cidade[70];

      int Pturisticos2, cd_cidade2, populacao2;
      float altura2, area2, pib2, dencidade2, vlpib;
      char estado2[3], cidade2[70];

      float vl1, vl2, vl3, vl4, vl5, vl6, vl7, vl8, vl9, vl10, vl11, vl12, vl13, vl14, vl15, vl16, vl17, vl18, vl19, vl20, vl21, Vl22, vl23, vl24, vl25,
          vl26, vl27, vl28, vl29, vl30;

      // ********** MENU PRINCIPAL ********** //

      printf("Menu principal\n ");
      printf("1 - Inicial Jogo\n ");
      printf("2 - Ver regras\n ");
      printf("3 - Sair do jogo\n ");
      printf("escolha uma opcção:");
      scanf("%d", &opcao);

      // ********** DINAMICA DO JOGO ********** //

      switch (opcao)
      {
      case 1:
            printf("Numero da carta: 1\n");

            printf("Digite o estado de origem: ");
            scanf("%s", estado);

            printf("Cidade: ");
            scanf("%s", cidade);

            printf("Codigo da cidade: ");
            scanf("%d", &cd_cidade);

            printf("quantidade de pontos turisticos:");
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
            printf("Valor do PIB: %.3f bilhões de reais\n", pib);

            dencidade = populacao / area;
            valorpib = pib / populacao;
            vldenpib = dencidade + valorpib;
            spoder = populacao + area + pib + Pturisticos + valorpib + (1 / dencidade);

            printf("dencidade Populacional Carta 1: %.2f habitantes/km²\n", dencidade);
            printf("PIB per Capita: %.2f\n", valorpib);
            printf("Valor total do Super Poder: %.2f \n", spoder);

            //     ********************  CARTA 2   ********************   ///

            printf("Numero da carta: 2\n");

            printf("Digite o estado de origem: ");
            scanf("%s", estado2);

            printf("Cidade: ");
            scanf("%s", cidade2);

            printf("Codigo da cidade: ");
            scanf("%d", &cd_cidade2);

            printf("quantidade de pontos turisticos:");
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
            printf("Valor do PIB: %.3f bilhões de reais\n", pib2);

            dencidade2 = populacao2 / area2;
            vlpib = pib2 / populacao2;
            spoder2 = populacao2 + area2 + pib2 + Pturisticos2 + vlpib + (1 / dencidade2);
            printf("dencidade Populacional Carta 1: %.2f habitantes/km²\n");
            printf("PIB per Capita: %.2f\n", vlpib);
            printf("Valor total do Super Poder Carta 2: %.2f \n", spoder2);

            break;

      case 2:
            printf("regas do jogo\n");
            break;

      case 3:
            ("sair");
            break;

      default:
            printf("Opção invalida");
      }

      // **********  COMPARAÇÕES DAS CARTAS ********** //

      printf("escolha o primeiro atributo para disputa de cartas:\n");
      printf("escolha 1: Populacao\n");
      printf("escolha 2: PIB\n");
      printf("escolha 3: Pontos turisticos\n");
      printf("escolha 4: Dencidade Poulacional n");
      printf("escolha 5: Valor do PIB per Capita\n");
      printf("escolha 6: Total Super poder\n");
      printf("Comparações escolhidas:");
      scanf("%d", &comparacao1);

      switch (comparacao1)
      {

      case 1:
            printf("Primeira atribuição escolhida: População\no valor da carta é:"
                   "%d\n",
                   populacao);

            break;

      case 2:
            printf("Segunda atribuição escolhida: PIB\no valor da carta é:"
                   "%d\n",
                   pib);

            break;

      case 3:
            printf("Terceira atribuição escolhida: Pontos Turisticos\no valor da carta é:"
                   "%d\n",
                   Pturisticos);
            break;

      case 4:
            printf("Quarta atribuição escolhida: Descidade Populacional\no valor da carta é:"
                   "%d\n",
                   dencidade);
            break;

      case 5:
            printf("Quinta atribuição escolhida: Valor PIB per Capita\no valor da carta é:"
                   "%d\n",
                   vlpib);
            break;

      case 6:
            printf("Sexta atribuição escolhida: Super Poder\no valor da carta é:"
                   "%d\n",
                   spoder);
            break;

      default:
            ("Opção invalida.");
      }
      printf("o segundo a atributo para disputa de cartas:\n");
      printf("escolha 1: Populacao\n");
      printf("escolha 2: PIB\n");
      printf("escolha 3: Pontos turisticos\n");
      printf("escolha 4: Dencidade Poulacional n");
      printf("escolha 5: Valor do PIB per Capita\n");
      printf("escolha 6: Total Super poder\n");
      printf("Comparações escolhidas:");
      scanf("%d", &comparacao2);

      switch (comparacao2)
      {

      case 1:
            printf("Primeira atribuição escolhida: População\no valor da carta é"
                   "%d\n",
                   populacao);

            break;

      case 2:
            printf("Segunda atribuição escolhida: PIB\no valor da carta é:"
                   "%d\n",
                   pib);

            break;

      case 3:
            printf("Terceira atribuição escolhida: Pontos Turisticos\no valor da carta é:"
                   "%d\n",
                   Pturisticos);
            break;

      case 4:
            printf("Quarta atribuição escolhida: Descidade Populacional\no valor da carta é:"
                   "%d\n",
                   dencidade);
            break;

      case 5:
            printf("Quinta atribuição escolhida: Valor PIB per Capita\no valor da carta é:"
                   "%d\n",
                   vlpib);
            break;

      case 6:
            printf("Sexta atribuição escolhida: Super Poder\no valor da carta é:"
                   "%d\n",
                   spoder);
            break;

      default:
            ("Opção invalida.");
      }

      vl1 = populacao + pib;
      vl2 = populacao + pib;
      vl3 = populacao + pib;
      vl4 = populacao + pib;
      vl5 = populacao + pib;

      vl6 = populacao + pib;
      vl7 = populacao + pib;
      vl8 = populacao + pib;
      vl9 = populacao + pib;
      vl10 = populacao + pib;

      vl11 = populacao + pib;
      vl12 = populacao + pib;
      vl13 = populacao + pib;
      vl14 = populacao + pib;
      vl15 = populacao + pib;

      vl16 = populacao + pib;
      vl17 = populacao + pib;
      vl18 = populacao + pib;
      vl19 = populacao + pib;
      vl20 = populacao + pib;
      vl21 = populacao + pib;
      Vl22 = populacao + pib;
      vl23 = populacao + pib;
      vl24 = populacao + pib;
      vl25 = populacao + pib;

      vl26 = populacao + pib;
      vl27 = populacao + pib;
      vl28 = populacao + pib;
      vl29 = populacao + pib;
      vl30 = populacao + pib;

      printf("soma total dos atributos escolhidos: %f", vl1);
}
