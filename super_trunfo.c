#include <stdio.h>

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
/* 
  char estado1[3], estado2[3];
  int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
  unsigned long int populacao1, populacao2;
  char codigo_da_carta1[4], codigo_da_carta2[4], nome_da_cidade1[50], nome_da_cidade2[50]; 
  float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;
  float superpoder1, superpoder2;
  */

  /*
  // Área para entrada de dados
  printf("A seguir serao inseridos os dados de duas cartas super tunfo.\n");
  printf("Digite os dados da primeira carta: \n\n");
    printf("duas letras de A a Z que representa o estado: ");
      scanf("%s", &estado1); //
    printf("Codigo da carta com as letras do estado seguida de um número de 1 a 4: ");
     scanf("%s", codigo_da_carta1);
    printf("Nome da cidade: ");
      scanf("%s", nome_da_cidade1);
    printf("Número de habitantes da cidade: ");
      scanf("%lu", &populacao1);
    printf("Área da cidade em quilômetros quadrados: ");
      scanf("%f", &area1);
    printf("Valor do Produto Interno Bruto (PIB) da cidade (em bilhoes de reais): ");
      scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos na cidade: ");
      scanf("%d", &numero_de_pontos_turisticos1);
  printf("\nDigite os dados da segunda carta: \n\n");
    printf("Uma letra de A a H que representa o estado: ");
      scanf(" %c", &estado2); // <-- Espaço antes do %c para evitar bugs com \n.
    printf("Codigo da carta com a letra do estado seguida de um número de 01 a 04: ");
      scanf("%s", codigo_da_carta2);
    printf("Nome da cidade: ");
      scanf("%s", nome_da_cidade2);
    printf("Número de habitantes da cidade: ");
      scanf("%lu", &populacao2);
    printf("Área da cidade em quilômetros quadrados: ");
      scanf("%f", &area2);
    printf("Valor do Produto Interno Bruto (PIB) da cidade (em bilhoes de reais): ");
      scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos na cidade: ");
      scanf("%d", &numero_de_pontos_turisticos2);
    */
   //ENTRADA DE DADOS DA PRIMEIRA CARTA
  char estado1[3] = "RN";
  char codigo_da_carta1[5] = "RN01";
  char nome_da_cidade1[15] = "Natal";
  unsigned long int populacao1 = 890000;
  float area1 = 167.339;
  float pib1 = 15.5;
  int numero_de_pontos_turisticos1 = 25;

  //ENTRADA DE DADOS DA SEGUNDA CARTA
  char estado2[3] = "PB";
  char codigo_da_carta2[5] = "PB02";
  char nome_da_cidade2[15] = "João Pessoa";
  unsigned long int populacao2 = 817511;
  float area2 = 211.475;
  float pib2 = 12.3;
  int numero_de_pontos_turisticos2 = 20;

  // Cálculo da densidade demográfica: 
  //A densidade demográfica é a quantidade de habitantes por quilômetro quadrado. Para calcular, dividimos a população total da cidade pela área (em Km²). Isso nos dá uma medida da concentração populacional na cidade.
  float densidade1 = (float) populacao1 / area1;
  float densidade2 = (float) populacao2 / area2;
  
  //Cálculo do PIB per capita:
  //O PIB per capita é um indicador de quanto cada pessoa da cidade, em média, "produz" economicamente. O PIB foi dado em bilhões de reais, então multiplicamos por 1.000.000.000 para converter para reais. Em seguida, dividimos o PIB em reais pela população total da cidade para obter o PIB per capita.*/
  float pibpercapita1 = (pib1 * 1000000000.0) / (float) populacao1; //<--Converção do PIB de Milhoes de Reais para Reais.
  float pibpercapita2 = (pib2 * 1000000000.0) / (float) populacao2; //<--Converção do PIB de Milhoes de Reais para Reais.

  //Cálculo do Super Poder:
  float superpoder1 = (float) populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pibpercapita1 + (1 / densidade1);
  float superpoder2 = (float) populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pibpercapita2 + (1 / densidade2);
 

  //Área para exibição dos dados da cidade
  printf("\nOs seguintes dados foram cadastrados nas cartas:\n");
  
    printf("\n*** CARTA 01 ***\n");
      printf("Estado: %s\n", estado1);
      printf("Codigo da carta: %s\n", codigo_da_carta1);
      printf("Cidade: %s\n", nome_da_cidade1);
      printf("População: %lu\n", populacao1);
      printf("Area: %.2f Km²\n", area1);
      printf("PIB: R$ %.1f bi de\n", pib1);
      printf("Quantidade de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
      printf("PIB per capita: %.2f reais\n", pibpercapita1);
      printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
      printf("Super Poder: %.2f\n", superpoder1);

    printf("\n*** CARTA 02 ***\n");
      printf("Estado: %s\n", estado2);
      printf("Codigo da carta: %s\n", codigo_da_carta2);
      printf("Cidade: %s\n", nome_da_cidade2);
      printf("População: %lu\n", populacao2);
      printf("Area: %.2f Km²\n", area2);
      printf("PIB: R$ %.1f Bi\n", pib2);
      printf("Quantidade de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
      printf("PIB per capita: %.2f reais\n", pibpercapita2);
      printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
      printf("Super Poder: %.2f\n", superpoder2);

  /* Área para exibição de resultados da batalha das cartas
   printf("\n*** BATALHA DAS CARTAS ***\n\n");
    printf("No critério População a Carta 1 venceu a Carta 2? %d\n", populacao1 > populacao2);
    printf("No critério Área a Carta 1 venceu a Carta 2? %d\n", area1 > area2);
    printf("No critério PIB a Carta 1 venceu a Carta 2? %d\n", pib1 > pib2);
    printf("No critério Pontos Turisticos a Carta 1 venceu a Carta 2? %d\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
    printf("No critério Densidade Populacional a Carta 1 venceu a Carta 2? %d\n", densidade1 < densidade2); //A densidade menor vence
    printf("No critério PIB Per Capta a carta 1 venceu a Carta 2? %d\n", pibpercapita1 > pibpercapita2);
    printf("No critério Super Poder a Carta 1 venceu a Carta 2? %d\n\n", superpoder1 > superpoder2);
    */
   
      //Comparação de todos os atributo individualmente 
   printf("\n*** BATALHA DAS CARTAS ***\n");
   printf("MENU DE ATRIBUTOS\n");
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
      printf("Carta 1 - %s/%s: %lu\n", nome_da_cidade1, estado1, populacao1);
      printf("Carta 2 - %s/%s: %lu\n", nome_da_cidade2, estado2, populacao2);
      //comparação do atributo
      if (populacao1 > populacao2){ //Se população 1 for maior que população 2, população 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (populacao2 > populacao1){ //Se a população 2 for maior que população 1, população 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{  //Se as populações forem iguais, da empate
          printf("No atributo População houve um empate entre as cartas!\n");
      }
      break;

    case 2:
    printf("\nAtributo: Área\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s/%s: %.2f\n", nome_da_cidade1, estado1, area1);
      printf("Carta 2 - %s/%s: %.2f\n", nome_da_cidade2, estado2, area2);
      //comparação do atributo
      if (area1 > area2){ //Se área 1 for maior que área 2, área 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (area2 > area1){ //Se a área 2 for maior que área 1, área 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se as áreas forem iguais, da empate
          printf("No atributo Área houve um empate entre as cartas!\n"); 
      }
      break;
    case 3:
    printf("\nAtributo: PIB\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s/%s: %.1f\n", nome_da_cidade1, estado1, pib1);
      printf("Carta 2 - %s/%s: %.1f\n", nome_da_cidade2, estado2, pib2);
      
      if (pib1 > pib2){ //Se PIB 1 for maior que PIB 2, PIB 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (pib2 > pib1){ //Se o PIB 2 for maior que PIB 1, PIB 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os PIBs forem iguais, da empate
          printf("No atributo PIB houve um empate entre as cartas!\n"); 
      }
      break;

    case 4:
    printf("\nAtributo: Pontos Turísticos\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s/%s: %d\n", nome_da_cidade1, estado1, numero_de_pontos_turisticos1);
      printf("Carta 2 - %s/%s: %d\n", nome_da_cidade2, estado2, numero_de_pontos_turisticos2);
      //comparação do atributo
      if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){ //Se pontos turísticos 1 for maior que pontos turísticos 2, pontos turísticos 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){ //Se os pontos turísticos 2 for maior que pontos turísticos 1, pontos turísticos 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os pontos turísticos forem iguais, da empate
          printf("No atributo Pontos Turísticos houve um empate entre as cartas!\n");
      }
      break;

    case 5:
    printf("\nAtributo: Densidade Populacional\n");
        //Rimpressão dos valores do atributo para comparação
        printf("Carta 1 - %s/%s: %.2f\n", nome_da_cidade1, estado1, densidade1);
        printf("Carta 2 - %s/%s: %.2f\n", nome_da_cidade2, estado2, densidade2);
        //comparação do atributo
        if (densidade1 < densidade2){ //Se densidade 1 for menor que densidade 2, densidade 1 vence
            printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }else if (densidade2 < densidade1){ //Se a densidade 2 for menor que densidade 1, densidade 2 vence
            printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
        }else{ //Se as densidades forem iguais, da empate
            printf("No atributo Densidade Populacional houve um empate entre as cartas!\n");
        }

      break;

    case 6:
    printf("\nAtributo: PIB per capita\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s/%s: %.2f\n", nome_da_cidade1, estado1, pibpercapita1);
      printf("Carta 2 - %s/%s: %.2f\n", nome_da_cidade2, estado2, pibpercapita2);
      //comparação do atributo
      if (pibpercapita1 > pibpercapita2){  //Se PIB per capita 1 for maior que PIB per capita 2, PIB per capita 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (pibpercapita2 > pibpercapita1){ //Se o PIB per capita 2 for maior que PIB per capita 1, PIB per capita 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os PIBs per capita forem iguais, da empate
          printf("No atributo PIB per capita houve um empate entre as cartas!\n");
      }
      break;

    case 7:      
    printf("\nAtributo: Superpoder\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s/%s: %.2f\n", nome_da_cidade1, estado1, superpoder1);
      printf("Carta 2 - %s/%s: %.2f\n", nome_da_cidade2, estado2, superpoder2);
      //comparação do atributo
      if (superpoder1 > superpoder2){ //Se superpoder 1 for maior que superpoder 2, superpoder 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (superpoder2 > superpoder1){ //Se o superpoder 2 for maior que superpoder 1, superpoder 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os superpoderes forem iguais, da empate
          printf("No atributo Superpoder houve um empate entre as cartas!\n");
      }
      break;
    default:
      printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n");
      break;    
    }


return 0;
} 