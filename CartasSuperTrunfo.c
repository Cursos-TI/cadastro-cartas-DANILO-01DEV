#include <stdio.h>

int main(){
//RASCUNHO DO PROJETO SUPER TRUNFO
// INFORMAÇOES DA CARTA A01

    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    unsigned int populacao1, populacao2; 
    float area_em_km2_1, area_em_km2_2;
    float pib1, pib2;
    int numeros_de_pontos_turisticos1, numeros_de_pontos_turisticos2;
    // VARIAVEIS DE CALCULO
    float Densidade_Populacional1, Densidade_Populacional2;
    float pib_per_Capita1, pib_per_Capita2;
    float super_poder1, super_poder2;
    // VARIAÇAO DE COMPARAÇAO
    int vence_populacao, vence_area, vence_pib, vence_pontos_turisticos;
    int vence_densidade, vence_pib_per_capita, vence_super_poder;

    //BLOCO 2 SCANF

    printf("\n     *** CARTA 1 ***\n");


    printf(" digite o estado1 (A a Z): ");
    scanf(" %c%*c", &estado1); // 
  
    printf(" digite o codigo da carta1: "); 
    scanf("%s", codigo_da_carta1);

    printf(" digite o nome da cidade1: ");
    scanf("%s", nome_da_cidade1);

    printf(" digite a populaçao1: ");
    scanf("%d", &populacao1);

    printf(" digite a area em km²: ");
    scanf("%f", &area_em_km2_1);

    printf(" digite o pib da cidade1: ");
    scanf("%f", &pib1);

    printf(" digite o numeros de pontos turisticos: ");
    scanf("%d", &numeros_de_pontos_turisticos1); 


    printf("\n     *** CATAR 2 *** \n");


    printf(" digite o estado2 (A a Z): ");
    scanf(" %c%*c", &estado2);
   
    printf(" digite o codigo da carta2: "); 
    scanf("%s", codigo_da_carta2);
    
    printf(" digite o nome da cidade2: ");
    scanf("%s", nome_da_cidade2);
    
    printf(" digite a populaçao2: ");
    scanf("%d", &populacao2);
    
    printf(" digite a area em km²2: ");
    scanf("%f", &area_em_km2_2);
   
    printf(" digite o pib da cidade2: ");
    scanf("%f", &pib2);
    
    printf(" digite o numeros de pontos turisticos2: ");
    scanf("%d", &numeros_de_pontos_turisticos2) ; 
  
    #define PODER_MAXIMO_DENSIDADE 100000.0f // Para o caso de densidade=0

    // BLOCO DE CALCULOS
    
    Densidade_Populacional1 = (area_em_km2_1 > 0.0f) ? ((float)populacao1 / area_em_km2_1) : 0.0f;
    Densidade_Populacional2 = (area_em_km2_2 > 0.0f) ? ((float)populacao2 / area_em_km2_2) : 0.0f;
  
    pib_per_Capita1 = (populacao1 > 0) ? (pib1 / (float)populacao1) : 0.0f;
    pib_per_Capita2 = (populacao2 > 0) ? (pib2 / (float)populacao2) : 0.0f;
  
    float poder_densidade1 = (Densidade_Populacional1 > 0.0f) ? (1.0f / Densidade_Populacional1) : PODER_MAXIMO_DENSIDADE;
    float poder_densidade2 = (Densidade_Populacional2 > 0.0f) ? (1.0f / Densidade_Populacional2) : PODER_MAXIMO_DENSIDADE;

    super_poder1 = (float)populacao1 + area_em_km2_1 + pib1 + pib_per_Capita1 + (float)numeros_de_pontos_turisticos1 + poder_densidade1;
    super_poder2 = (float)populacao2 + area_em_km2_2 + pib2 + pib_per_Capita2 + (float)numeros_de_pontos_turisticos2 + poder_densidade2;

    // BLOCO DE EXIBIÇAO DE ATRIBUTOS

    printf(" \n ***** carta1 ***** \n");
   
    printf(" -NOME DO ESTADO: %c\n", estado1);
    printf(" -CODIGO DA CARTA: %s\n", codigo_da_carta1);
    printf(" -NOME DA CIDADE: %s\n", nome_da_cidade1);
    printf(" -POPULAÇAO: %d\n", populacao1);
    printf(" -AREA: %.2f KM²\n ", area_em_km2_1);
    printf(" -PIB: %.2f bilhoes de reais\n", pib1);
    printf(" -NUMERO DE PONTOS TURISTICOS: %d\n", numeros_de_pontos_turisticos1);
    printf(" -densidade populacional e: %.2fhab/km²\n", Densidade_Populacional1);
    printf(" -pib per carpita e: %.15freais\n", pib_per_Capita1);
    printf(" -super poder 1: %f\n", super_poder1);


    printf(" \n ***** carta2 ***** \n");

    printf(" -NOME DO ESTADO: %c\n", estado2);
    printf(" -CODIGO DA CARTA: %s\n", codigo_da_carta2);
    printf(" -NOME DA CIDADE: %s\n", nome_da_cidade2);
    printf(" -POPULAÇAO: %d\n", populacao2);
    printf(" -AREA: %.2f KM²\n ", area_em_km2_2);
    printf(" -PIB: %.2f bilhoes de reais\n", pib2);
    printf(" -NUMERO DE PONTOS TURISTICOS: %d\n", numeros_de_pontos_turisticos2);
    printf(" -densidade populacional e: %.2fhab/km²\n", Densidade_Populacional2);
    printf(" -pib per carpita e: %.15freais\n", pib_per_Capita2);
    printf(" -super poder 2: %f\n", super_poder2);

    // BLOCO DE COMPARAÇOES E EXIBIÇAO FINAL
    
    printf("\nComparação de Cartas:\n");


    #define VENCEDOR(resultado) ((resultado) == 1 ? "Carta 1" : "Carta 2")


    vence_populacao = (populacao1 > populacao2) ? 1 : 0;
    vence_area = (area_em_km2_1 > area_em_km2_2) ? 1 : 0;
    vence_pib = (pib1 > pib2) ? 1 : 0;
    vence_pontos_turisticos = (numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2) ? 1 : 0;
    vence_pib_per_capita = (pib_per_Capita1 > pib_per_Capita2) ? 1 : 0;
    vence_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
    vence_densidade = (Densidade_Populacional1 < Densidade_Populacional2) ? 1 : 0;


    printf("\n\nComparação de Cartas:\n");
    printf("População: %s venceu (%d)\n", VENCEDOR(vence_populacao), vence_populacao);
    printf("Área: %s venceu (%d)\n", VENCEDOR(vence_area), vence_area);
    printf("PIB: %s venceu (%d)\n", VENCEDOR(vence_pib), vence_pib);
    printf("Pontos Turísticos: %s venceu (%d)\n", VENCEDOR(vence_pontos_turisticos), vence_pontos_turisticos);
    printf("Densidade Populacional: %s venceu (%d)\n", VENCEDOR(vence_densidade), vence_densidade);
    printf("PIB per Capita: %s venceu (%d)\n", VENCEDOR(vence_pib_per_capita), vence_pib_per_capita);
    printf("Super Poder: %s venceu (%d)\n", VENCEDOR(vence_super_poder), vence_super_poder);



    return 0;

}
