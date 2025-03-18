#include <stdio.h>

   int main(){
   int populacao1, ponto_turisticos1;
   char nome_cidade1[20], nome_estado1[20], codigo1[10];
   float area1, PIB1;


    // Variavei que usei e (1 e 2)
    // 1 Para a primeira Carta e 2 para a segunda
    // Cadastro da carta 1

   printf("----CADASTRO DE CARTAS SUPERTRUNFO----\n");
   printf("Carta 1\n");

   printf("Digite uma letra para representar o estado (de A a H): \n");
   scanf("%s", &nome_estado1);

   printf("Digite um numero, para representar o codigo da carta: (de 01 a 04)\n");
   scanf("%s", &codigo1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome_cidade1);

   printf("Digite a quantidade de habitantes da cidade: \n");
   scanf("%d", &populacao1);

   printf("Digite a area da cidade em quilometros quadrados:\n");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade:\n");
   scanf("%f", &PIB1);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%i", &ponto_turisticos1);

   printf("Carta1, Cadastrada com sucesso:\n");

   printf("Carta1:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s \n", nome_estado1, codigo1, nome_cidade1 );
   printf("Populacao: %i\n Area: %e\n PIB: %f\n Numero de Pontos Turisticos: %i\n",populacao1, area1, PIB1, ponto_turisticos1);


   // CADASTRO DA CARTA NUMERO 2 


   printf("----CADASTRO DE CARTAS SUPERTRUNFO----\n");
   printf("Carta 2\n");

   int populacao2, ponto_turisticos2;
   char nome_cidade2[20], nome_estado2[20], codigo2[10];
   float area2, PIB2;

   printf("Digite uma letra para representar o estado (de A a H): \n");
   scanf("%s", &nome_estado2);

   printf("Digite um numero, para representar o codigo da carta: (de 01 a 04)\n");
   scanf("%s", &codigo2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome_cidade2);

   printf("Digite a quantidade de habitantes da cidade: \n");
   scanf("%d", &populacao2);

   printf("Digite a area da cidade em quilometros quadrados:\n");
   scanf("%f", &area2);

   printf("Digite o PIB da cidade:\n");
   scanf("%f", &PIB2);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%i", &ponto_turisticos2);

   printf("Carta2, Cadastrada com sucesso:\n");

   printf("Carta2:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s \n", nome_estado2, codigo2, nome_cidade2 );
   printf("Populacao: %i\n Area: %e\n PIB: %f\n Numero de Pontos Turisticos: %i\n",populacao2, area2, PIB2, ponto_turisticos2);




   return 0;


   }
