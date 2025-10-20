#include <stdio.h> // incluir funcoes de entrada e saida (ex: printf, scanf, getchar)
#include <string.h> // inclui funçoes para manipulaçao de strings (ex: strcpy, stcmp)
#include <ctype.h> // inclui funçoes para testar e manipular caracteres (ex: isalpha, toupper)

void limpar_buffer(){ // tem como objetivo lipar o buffer de entrada
    int c; // declara uma variavel inteira (c) para armazenar cada caracter lido no buffer
    while((c = getchar()) != '\n' && c != EOF) // le e descarta todos os caracteres do buffer de entrada
    { }
    }

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4] ;
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populaçao1, populaçao2; 
    float are_em_km²1, are_em_km²2;
    float pib1, pib2;
    int numeros_de_pontos_turisticos1, numeros_de_pontos_turisticos2;

   
    printf(" digite o estado1 (A a Z): ");
    scanf(" %c", &estado1 );
    limpar_buffer();
    estado1 = toupper(estado1 ); // converte o caracter armazenado para maiusculo

    printf(" digite o codigo da carta1: "); //EX: A01
    scanf(" %s", codigo_da_carta1 );
    limpar_buffer(); // chama a funçao para limpar o buffer de entrada
  
    printf(" digite o nome da cidade1: ");
    scanf(" %s",nome_da_cidade1 );
    limpar_buffer();

    printf(" digite a populaçao1: ");
    scanf(" %d",&populaçao1 );
    limpar_buffer();

    printf(" digite a area em km²1: ");
    scanf(" %f",&are_em_km²1 );
    limpar_buffer();

    printf(" digite o pib da cidade1: ");
    scanf(" %f",&pib1 );
    limpar_buffer();

    printf(" digite o numeros de pontos turisticos1: ");
    scanf(" %d",&numeros_de_pontos_turisticos1) ; 
    limpar_buffer();

    

    printf(" digite o estado2 (A a Z): ");
    scanf(" %c", &estado2 );
    limpar_buffer();
    estado2 = toupper(estado2 );

    printf(" digite o codigo da carta2: "); //EX: A01
    scanf(" %s", codigo_da_carta2 );
    limpar_buffer();
  
    printf(" digite o nome da cidade2: ");
    scanf(" %s",nome_da_cidade2 );
    limpar_buffer();

    printf(" digite a populaçao2: ");
    scanf(" %d",&populaçao2 );
    limpar_buffer();

    printf(" digite a area em km²2: ");
    scanf(" %f",&are_em_km²2 );
    limpar_buffer();

    printf(" digite o pib da cidade2: ");
    scanf(" %f",&pib2 );
    limpar_buffer();

    printf(" digite o numeros de pontos turisticos2: ");
    scanf(" %d",&numeros_de_pontos_turisticos2) ; 
    limpar_buffer();
    


    printf("\n\n##############################\n");
    printf("            carta1\n");
    printf("##############################\n");



    printf(" -NOME DO ESTADO: %c\n", estado1);
    printf(" -CODIGO DA CARTA: %s\n", codigo_da_carta1);
    printf(" -NOME DA CIDADE: %s\n", nome_da_cidade1);
    printf(" -POPULAÇAO: %d\n", populaçao1);
    printf(" -AREA: %.2f KM²\n ", are_em_km²1);
    printf("-PIB: %.2f bilhoes de reais\n", pib1);
    printf(" -NUMERO DE PONTOS TURISTICOS: %d\n", numeros_de_pontos_turisticos1);



    printf("\n\n##############################\n");
    printf("            carta2\n");
    printf("##############################\n");



    printf(" -NOME DO ESTADO: %c\n", estado2);
    printf(" -CODIGO DA CARTA: %s\n", codigo_da_carta2);
    printf(" -NOME DA CIDADE: %s\n", nome_da_cidade2);
    printf(" -POPULAÇAO: %d\n", populaçao2);
    printf(" -AREA: %.2f KM²\n ", are_em_km²2);
    printf("-PIB: %.2f bilhoes de reais\n", pib2);
    printf(" -NUMERO DE PONTOS TURISTICOS: %d\n", numeros_de_pontos_turisticos2);




return 0;
} 
