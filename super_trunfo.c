#include <stdio.h>

/*
O que você vai fazer
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  int populacao1, populacao2, numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
  char codigo_da_carta1[3], codigo_da_carta2[3], nome_da_cidade1[50], nome_da_cidade2[50];
  float area1, area2, pib1, pib2;
  
  // Área para entrada de dados
    printf("A seguir serao inseridos os dados de duas cartas super tunfo.\nDigite os dados da primeira carta:\n");
    printf("Uma letra de A a H que representa o estado 01: ");
    scanf("%c", &estado1);
    printf("Codigo da carta com a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo_da_carta1);
    printf("Nome da cidade 01: ");
    scanf("%s", nome_da_cidade1);
    printf("Número de habitantes da cidade 01: ");
    scanf("%d", &populacao1);
    printf("Área da cidade 01 em quilômetros quadrados: ");
    scanf("%f", area1);
    printf("Valor do Produto Interno Bruto (PIB) da cidade 01: ");
    scanf("%f", pib1);
    printf("Quantidade de pontos turísticos na cidade 01: ");
    scanf("%d", &numero_de_pontos_turisticos1);


  // Área para exibição dos dados da cidade

return 0;
} 

