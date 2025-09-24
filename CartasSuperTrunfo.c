#include <stdio.h>

int main() {
  
char estado1 [50];
int populacao1, municipios1;
float pib1, area1;

printf("Estado: ");
scanf("%s", estado1);

printf("Área: ");
scanf("%f",&area1);

printf("Pib: ");
scanf("%f",&pib1);

printf("População: ");
scanf("%d", &populacao1);

printf("Municípios: ");
scanf("%d", &municipios1);

printf("Estado: %s\n", estado1);
printf("Área: %f\n",area1);
printf("Pib: %f\n",pib1);
printf("População: %d\n", populacao1);
printf("Municípios: %d\n", municipios1);

return 0;

} 
