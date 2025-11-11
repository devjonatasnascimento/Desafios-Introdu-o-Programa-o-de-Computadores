#include <stdio.h>

int main(){
  //DAFENIÇÃO DE VARIÁVEIS E ENTRADA DE DADOS DA PRIMEIRA CARTA
  char estado1[3] = "RN";
  char codigo_da_carta1[5] = "RN01";
  char nome_da_cidade1[15] = "Natal";
  unsigned long int populacao1 = 751300;
  float area1 = 167.401;
  float pib1 = 24.2;
  int numero_de_pontos_turisticos1 = 25;
  
  //DEFINIÇÃO DE VARIÁVEIS E ENTRADA DE DADOS DA SEGUNDA CARTA
  char estado2[3] = "PB";
  char codigo_da_carta2[5] = "PB02";
  char nome_da_cidade2[15] = "João Pessoa";
  unsigned long int populacao2 = 833932;
  float area2 = 210.044;
  float pib2 = 22.2;
  int numero_de_pontos_turisticos2 = 20;

  // Cálculo da densidade demográfica: 
  //A densidade demográfica é a quantidade de habitantes por quilômetro quadrado. Para calcular, dividimos a população total da cidade pela área (em Km²). Isso nos dá uma medida da concentração populacional na cidade.
  float densidade1 = (float) populacao1 / area1;
  float densidade2 = (float) populacao2 / area2;
  
  //Cálculo do PIB per capita:
  //O PIB per capita é um indicador de quanto cada pessoa da cidade, em média, "produz" economicamente. O PIB foi dado em bilhões de reais, então multiplicamos por 1.000.000.000 para converter para reais. Em seguida, dividimos o PIB em reais pela população total da cidade para obter o PIB per capita.*/
  float pibpercapita1 = (pib1 * 1000000000) / (float) populacao1; //<--Converção do PIB de bilhões de Reais para Reais.
  float pibpercapita2 = (pib2 * 1000000000) / (float) populacao2; //<--Converção do PIB de bilhões de Reais para Reais.

  //Cálculo do Super Poder:
  float superpoder1 = (float) populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pibpercapita1 + (1 / densidade1);
  float superpoder2 = (float) populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pibpercapita2 + (1 / densidade2);
 

  //ÁREA PARA EXIBIÇÃO DOS DADOS CADASTRADOS NAS CARTAS
  printf("\nOs seguintes dados foram cadastrados nas cartas:\n");
    printf("\n*** CARTA 01 ***\n");
      printf("Estado: %s\n", estado1);
      printf("Codigo da carta: %s\n", codigo_da_carta1);
      printf("Cidade: %s\n", nome_da_cidade1);
      printf("População: %lu habitantes\n", populacao1);
      printf("Area: %.2f Km²\n", area1);
      printf("PIB: R$ %.1f Bi\n", pib1);
      printf("Quantidade de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
      printf("PIB per capita: R$ %.2f\n", pibpercapita1);
      printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
      printf("Super Poder: %.2f\n", superpoder1);

    printf("\n*** CARTA 02 ***\n");
      printf("Estado: %s\n", estado2);
      printf("Codigo da carta: %s\n", codigo_da_carta2);
      printf("Cidade: %s\n", nome_da_cidade2);
      printf("População: %lu habitantes\n", populacao2);
      printf("Area: %.2f Km²\n", area2);
      printf("PIB: R$ %.1f Bi\n", pib2);
      printf("Quantidade de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
      printf("PIB per capita: R$ %.2f\n", pibpercapita2);
      printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
      printf("Super Poder: %.2f\n", superpoder2);

  //MENU DE COMPARAÇÃO DOS ATRIBUTOS 
  printf("\n*** BATALHA DAS CARTAS ***\n");
  printf("Menu de Atributos\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB Per Capita\n");
  printf("7. SuperPoder\n");
  printf("Escolha uma opção dentre os atributos para comparar as cartas: ");
  int opcao;
  scanf("%d", &opcao);

  switch(opcao){
    case 1:
      printf("\nAtributo: População\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: %lu habitantes\n", nome_da_cidade1, estado1, populacao1);
        printf("Carta 2 - %s/%s: %lu habitantes\n", nome_da_cidade2, estado2, populacao2);
        //comparação do atributo
        populacao1 > populacao2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        populacao2 > populacao1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n"); 
      break;
    case 2:
      printf("\nAtributo: Área\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: %.2f Km²\n", nome_da_cidade1, estado1, area1);
        printf("Carta 2 - %s/%s: %.2f Km²\n", nome_da_cidade2, estado2, area2);
        //comparação do atributo
        area1 > area2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        area2 > area1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n");
      break;
    case 3:
      printf("\nAtributo: PIB\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: R$ %.1f bilhões\n", nome_da_cidade1, estado1, pib1);
        printf("Carta 2 - %s/%s: R$ %.1f bilhões\n", nome_da_cidade2, estado2, pib2);
        //comparação do atributo
        pib1 > pib2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        pib2 > pib1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n");
        break;
    case 4:
      printf("\nAtributo: Pontos Turísticos\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: %d\n", nome_da_cidade1, estado1, numero_de_pontos_turisticos1);
        printf("Carta 2 - %s/%s: %d\n", nome_da_cidade2, estado2, numero_de_pontos_turisticos2);
        //comparação do atributo
        numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n");
      break;
    case 5:
      printf("\nAtributo: Densidade Populacional\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: %.2f hab/Km²\n", nome_da_cidade1, estado1, densidade1);
        printf("Carta 2 - %s/%s: %.2f hab/Km²\n", nome_da_cidade2, estado2, densidade2);
        //comparação do atributo
        densidade1 < densidade2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        densidade2 < densidade1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n");
      break;
    case 6:
      printf("\nAtributo: PIB per capita\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: R$ %.2f\n", nome_da_cidade1, estado1, pibpercapita1);
        printf("Carta 2 - %s/%s: R$ %.2f\n", nome_da_cidade2, estado2, pibpercapita2);
        //comparação do atributo
        pibpercapita1 > pibpercapita2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        pibpercapita2 > pibpercapita1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n");
      break;
    case 7:      
      printf("\nAtributo: Superpoder\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: %.2f\n", nome_da_cidade1, estado1, superpoder1);
        printf("Carta 2 - %s/%s: %.2f\n", nome_da_cidade2, estado2, superpoder2);
        //comparação do atributo
        superpoder1 > superpoder2 ? printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1) : 
        superpoder2 > superpoder1 ? printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2) : 
        printf("Empate!\n");
      break;
    default:
      printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n");
      break;    
    }
return 0;
} 