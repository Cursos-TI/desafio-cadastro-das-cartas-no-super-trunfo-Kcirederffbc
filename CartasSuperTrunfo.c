#include <stdio.h>

int main (){

char estado[20], cdc[3], cidade[20], estado2[20], cdc2[3], cidade2[20], continuar[10];
int populacao, p_turisticos, populacao2, p_turisticos2;
float area, pib, area2, pib2;

printf ("Criador de cartas, envie qualquer caractere para continuar! \n");
scanf ("%s", continuar);

printf ("Insira o Estado \n");
scanf ("%20s", estado);

printf ("Insira o código da carta \n");
scanf ("%3s", cdc);

printf ("Insira a Cidade! \n");
scanf ("%20s", cidade);

printf ("Insira a população do Estado! \n");
scanf ("%d", &populacao);

printf ("Insira o número de pontos turísticos! \n");
scanf ("%d", &p_turisticos);

printf ("Insira a área! \n");
scanf ("%f", &area);

printf ("Insira o PIB! \n");
scanf ("%f", &pib);

//segunda carta

printf ("Envie qualquer caractere para continuar com a criação! \n");
scanf ("%s", continuar);

printf ("Insira o Estado \n");
scanf ("%20s", estado2);

printf ("Insira o código da carta \n");
scanf ("%3s", cdc2);

printf ("Insira a Cidade! \n");
scanf ("%20s", cidade2);

printf ("Insira a população do Estado! \n");
scanf ("%d", &populacao2);

printf ("Insira o número de pontos turísticos! \n");
scanf ("%d", &p_turisticos2);

printf ("Insira a área! \n");
scanf ("%f", &area2);

printf ("Insira o PIB! \n");
scanf ("%f", &pib2);

//final

printf ("Carta 1\n");
printf ("Estado: %s\n", estado);
printf ("Código de Carda: %s \n", cdc);
printf ("Cidade: %s\n", cidade);
printf ("População: %d\n", populacao);
printf ("Pontos turísticos: %d\n", p_turisticos);
printf ("Àrea: %f\n", area);
printf ("PIB: %f\n", pib);

printf ("Carta 2\n");
printf ("Estado: %s\n", estado2);
printf ("Código de Carda: %s \n", cdc2);
printf ("Cidade: %s\n", cidade2);
printf ("População: %d\n", populacao2);
printf ("Pontos turísticos: %d\n", p_turisticos2);
printf ("Àrea: %f\n", area2);
printf ("PIB: %f\n", pib2);


return 0;
}