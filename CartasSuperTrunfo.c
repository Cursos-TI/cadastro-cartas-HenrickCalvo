#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao, pontosturisticos;

  float area, pib;
  
  char estado[30], cidade[30], codigo[4];

  // Área para entrada de dados

  printf("Nome do estado: \n");
  scanf("%s", estado);

  printf("Nome da cidade: \n");
  scanf("%s", cidade);

  printf("Código da carta: \n");
  scanf("%s", codigo);

  printf("População da cidade: \n");
  scanf("%d", &populacao);

  printf("Área(em km²): \n");
  scanf("%f", &area);

  printf("PIB: \n");
  scanf("%f", &pib);

  printf("Número de pontos turísticos: \n");
  scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade

  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("Código da carta: %s\n", codigo);
  printf("População da cidade: %d\n", populacao);
  printf("Área(em km²): %.3f\n", area);
  printf("PIB: %.2f%\n", pib);
  printf("Número de pontos turísticos: %d\n", pontosturisticos);

return 0;
} 
