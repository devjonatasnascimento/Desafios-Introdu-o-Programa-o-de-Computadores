#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
  unsigned long int populacao1, populacao2;
  char codigo_da_carta1[4], codigo_da_carta2[4], nome_da_cidade1[50], nome_da_cidade2[50]; 
  float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;
  float superpoder1, superpoder2;
  
  
  // Área para entrada de dados
  printf("A seguir serao inseridos os dados de duas cartas super tunfo.\nDigite os dados da primeira carta:\n\n");
    
    printf("Uma letra de A a H que representa o estado: ");
    scanf(" %c", &estado1); // <-- Espaço antes do %c para evitar bugs com \n.
    
    printf("Codigo da carta com a letra do estado seguida de um número de 01 a 04: ");
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
    
    /* Cálculo da densidade demográfica: 
      A densidade demográfica é a quantidade de habitantes por quilômetro quadrado. Para calcular, dividimos a população total da cidade pela área (em Km²). Isso nos dá uma medida da concentração populacional na cidade. */
    densidade1 = (float) populacao1 / area1;
    
    /* Cálculo do PIB per capita:
      O PIB per capita é um indicador de quanto cada pessoa da cidade, em média, "produz" economicamente. O PIB foi dado em bilhões de reais, então multiplicamos por 1.000.000.000 para converter para reais. Em seguida, dividimos o PIB em reais pela população total da cidade para obter o PIB per capita.*/
    pibpercapita1 = (pib1 * 1000000000.0) / (float) populacao1; //<--Converção do PIB de Milhoes de Reais para Reais.
    superpoder1 = (float) populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pibpercapita1 + (1 / densidade1);

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
    /* Cálculo da densidade demográfica: 
      A densidade demográfica é a quantidade de habitantes por quilômetro quadrado. Para calcular, dividimos a população total da cidade pela área (em Km²). Isso nos dá uma medida da concentração populacional na cidade. */
    densidade2 = (float) populacao2 / area2;
    /* Cálculo do PIB per capita:
      O PIB per capita é um indicador de quanto cada pessoa da cidade, em média, "produz" economicamente. O PIB foi dado em bilhões de reais, então multiplicamos por 1.000.000.000 para converter para reais. Em seguida, dividimos o PIB em reais pela população total da cidade para obter o PIB per capita.*/
    pibpercapita2 = (pib2 * 1000000000.0) / (float) populacao2; //<--Converção do PIB de Milhoes de Reais para Reais.
    superpoder2 = (float) populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pibpercapita2 + (1 / densidade2);
 

  // Área para exibição dos dados da cidade
  printf("\nOs seguintes dados foram cadastrados nas cartas:\n");
  
    printf("\n*** CARTA 01 ***\n");
      printf("Estado: %c\n", estado1);
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
      printf("Estado: %c\n", estado2);
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

    printf("\nAtributo: População\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s: %lu\n", nome_da_cidade1, populacao1);
      printf("Carta 2 - %s: %lu\n", nome_da_cidade2, populacao2);
      //comparação do atributo
      if (populacao1 > populacao2){ //Se população 1 for maior que população 2, população 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (populacao2 > populacao1){ //Se a população 2 for maior que população 1, população 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{  //Se as populações forem iguais, da empate
          printf("No atributo População houve um empate entre as cartas!\n");
      }

    printf("\nAtributo: Área\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, area1);
      printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, area2);
      //comparação do atributo
      if (area1 > area2){ //Se área 1 for maior que área 2, área 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (area2 > area1){ //Se a área 2 for maior que área 1, área 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se as áreas forem iguais, da empate
          printf("No atributo Área houve um empate entre as cartas!\n"); 
      }

    printf("\nAtributo: PIB\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s: %.1f\n", nome_da_cidade1, pib1);
      printf("Carta 2 - %s: %.1f\n", nome_da_cidade2, pib2);
      
      if (pib1 > pib2){ //Se PIB 1 for maior que PIB 2, PIB 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (pib2 > pib1){ //Se o PIB 2 for maior que PIB 1, PIB 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os PIBs forem iguais, da empate
          printf("No atributo PIB houve um empate entre as cartas!\n"); 
      }

    printf("\nAtributo: PIB per capita\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, pibpercapita1);
      printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, pibpercapita2);
      //comparação do atributo
      if (pibpercapita1 > pibpercapita2){  //Se PIB per capita 1 for maior que PIB per capita 2, PIB per capita 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (pibpercapita2 > pibpercapita1){ //Se o PIB per capita 2 for maior que PIB per capita 1, PIB per capita 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os PIBs per capita forem iguais, da empate
          printf("No atributo PIB per capita houve um empate entre as cartas!\n");
      }

    printf("\nAtributo: Densidade Populacional\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, densidade1);
      printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, densidade2);
      //comparação do atributo
      if (densidade1 < densidade2){ //Se densidade 1 for menor que densidade 2, densidade 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (densidade2 < densidade1){ //Se a densidade 2 for menor que densidade 1, densidade 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se as densidades forem iguais, da empate
          printf("No atributo Densidade Populacional houve um empate entre as cartas!\n");
      }
      
    printf("\nAtributo: Superpoder\n");
      //Rimpressão dos valores do atributo para comparação
      printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, superpoder1);
      printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, superpoder2);
      //comparação do atributo
      if (superpoder1 > superpoder2){ //Se superpoder 1 for maior que superpoder 2, superpoder 1 vence
          printf("Resultado: A Carta 1 (%s) venceu!\n", nome_da_cidade1);
      }else if (superpoder2 > superpoder1){ //Se o superpoder 2 for maior que superpoder 1, superpoder 2 vence
          printf("Resultado: A Carta 2 (%s) venceu!\n", nome_da_cidade2);
      }else{ //Se os superpoderes forem iguais, da empate
          printf("No atributo Superpoder houve um empate entre as cartas!\n");
      }

return 0;
} 