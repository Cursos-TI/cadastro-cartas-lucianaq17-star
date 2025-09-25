#include <stdio.h>

int main() {
  
char estado1 [50], cidade1[50],estado2[50], cidade2[50];
int populacao1, municipios1, populacao2,municipios2;
float pib1, area1, pib2, area2;

//Entrada dados carta 1
printf("Digite Dados da Carta 1 \n");

printf("Estado: ");
scanf("%s", estado1);

printf("Cidade: ");
scanf("%s",cidade1);

printf("Área: ");
scanf("%f",&area1);

printf("Pib: ");
scanf("%f",&pib1);

printf("População: ");
scanf("%d", &populacao1);

printf("Municípios: ");
scanf("%d", &municipios1);

//Entrada dados carta 2
printf("\nDigite Dados da Carta 2 \n");

printf("Estado: ");
scanf("%s", estado2);

printf("Cidade: ");
scanf("%s",cidade2);

printf("Área: ");
scanf("%f",&area2);

printf("Pib: ");
scanf("%f",&pib2);

printf("População: ");
scanf("%d", &populacao2);

printf("Municípios: ");
scanf("%d", &municipios2);

// Saída carta 1
printf("\nResultado da Carta 1 \n");
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Área: %f\n",area1);
printf("Pib: %f\n",pib1);
printf("População: %d\n", populacao1);
printf("Municípios: %d\n", municipios1);

//Saída carta 2
printf("\nResultado da Carta 2 \n");
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n",cidade2);
printf("Área: %f\n",area2);
printf("Pib: %f\n",pib2);
printf("População: %d\n", populacao2);
printf("Municípios: %d\n", municipios2);


return 0;

} 
