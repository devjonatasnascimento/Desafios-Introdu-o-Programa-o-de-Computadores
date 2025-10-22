#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Toda string em C precisa de espaço extra para o terminador nulo (\0), que marca o fim da string. Logo, foi necessário 4 espaços para o codigo da carta de 3 caracteres.
  char estado1, estado2;
  int populacao1, populacao2, numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
  char codigo_da_carta1[4], codigo_da_carta2[4], nome_da_cidade1[50], nome_da_cidade2[50]; 
  float area1, area2, pib1, pib2;
  
  // Área para entrada de dados
    printf("A seguir serao inseridos os dados de duas cartas super tunfo.\nDigite os dados da primeira carta:\n");
        printf("Uma letra de A a H que representa o estado: ");
        scanf(" %c", &estado1); // <-- Espaço antes do %c para evitar bugs com \n.
        
        printf("Codigo da carta com a letra do estado seguida de um número de 01 a 04: ");
        scanf("%s", codigo_da_carta1);
        
        printf("Nome da cidade: ");
        scanf("%s", nome_da_cidade1);
        
        printf("Número de habitantes da cidade: ");
        scanf("%d", &populacao1);
        
        printf("Área da cidade em quilômetros quadrados: ");
        scanf("%f", &area1);
        
        printf("Valor do Produto Interno Bruto (PIB) da cidade (em bilhoes de reais): ");
        scanf("%f", &pib1);
        
        printf("Quantidade de pontos turísticos na cidade: ");
        scanf("%d", &numero_de_pontos_turisticos1);
    
    printf("\nDigite os dados da segunda carta: \n");
        
        printf("Uma letra de A a H que representa o estado: ");
        scanf(" %c", &estado2); // <-- Espaço antes do %c para evitar bugs com \n.
        
        printf("Codigo da carta com a letra do estado seguida de um número de 01 a 04: ");
        scanf("%s", codigo_da_carta2);
        
        printf("Nome da cidade: ");
        scanf("%s", nome_da_cidade2);
        
        printf("Número de habitantes da cidade: ");
        scanf("%d", &populacao2);
        
        printf("Área da cidade em quilômetros quadrados: ");
        scanf("%f", &area2);
        
        printf("Valor do Produto Interno Bruto (PIB) da cidade (em bilhoes de reais): ");
        scanf("%f", &pib2);
        
        printf("Quantidade de pontos turísticos na cidade: ");
        scanf("%d", &numero_de_pontos_turisticos2);

  // Área para exibição dos dados da cidade
    printf("\nOs seguintes dados foram cadastrados nas cartas:\n");
    printf("Carta 01\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo da carta: %s\n", codigo_da_carta1);
        printf("Cidade: %s\n", nome_da_cidade1);
        printf("População: %d\n", populacao1);
        printf("Area: %.2f Km²\n", area1);
        printf("PIB: R$ %.2f bi de\n", pib1);
        printf("Quantidade de pontos turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\nCarta 02\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo da carta: %s\n", codigo_da_carta2);
        printf("Cidade: %s\n", nome_da_cidade2);
        printf("População: %d\n", populacao2);
        printf("Area: %.2f Km²\n", area2);
        printf("PIB: R$ %.2f Bi\n", pib2);
        printf("Quantidade de pontos turísticos: %d\n\n", numero_de_pontos_turisticos2);

return 0;
} 