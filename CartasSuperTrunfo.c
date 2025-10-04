#include <stdio.h>

// Desafio Super Trunfo - Países - Jean Rocha
// Lógica do super trunfo - Iniciante

int main() {
    
    //==============================================
    // declarando as variáveis para as duas cartas
    //==============================================
    
    char estado1, estado2; // armazena uma letra representativa de um Estado
    
    char codigo1 [4], codigo2 [4]; // armazena o código da carta
    
    char cidade1 [50], cidade2 [50]; // armazena o nome da cidade
    
    int populacao1, populacao2; // armazena a população da cidade
    
    float area1, area2; // armazena a área da cidade em km²
    
    float pib1, pib2; // armazena o PIB da cidade
    
    int pontos_turisticos1, pontos_turisticos2; //armazena a quantidade de pontos turísticos
    
    // interagindo com o usuário e coletando as entradas para a primeira carta
    // sintaxe do scanf ("%formato1", &variavel1);

    printf ("Vamos iniciar digitando os dados da primeira carta.\nDigite uma letra representativa do Estado.\nVaria de 'A' a 'H': ");
    scanf (" %c", &estado1);

    printf ("Digite o Código da Carta com 2 algarismos numéricos: ");
    scanf ("%s", &codigo1);

    printf ("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
   
    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao1);

    printf ("Digite a área da cidade em km²: ");
    scanf ("%f", &area1);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &pontos_turisticos1);

    //==================================
    // fim do cadastro da primeira carta
    //==================================

    printf ("\nAgora vamos digitar os dados da segunda carta.\nDigite uma letra representativa do Estado.\nVaria de 'A' a 'H': ");
    scanf (" %c", &estado2);

    printf ("Digite o Código da Carta com 2 algarismos numéricos: ");
    scanf ("%s", &codigo2);

    printf ("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao2);

    printf ("Digite a área da cidade em km²: ");
    scanf ("%f", &area2);

    printf ("Digite o PIB da cidade: ");
    scanf ("%f", &pib2);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &pontos_turisticos2);

    //==================================
    // fim do cadastro da segunda carta
    //==================================

    //==================================
    //Cálculo da densidade populacional
    //==================================

    float densidade1 = (float) populacao1 / area1; // Densidade populacional da carta 1
    float densidade2 = (float) populacao2 / area2; // Densidade populacional da carta 2
    
    //=======================================
    //Cálculo do PIB per capita
    //=======================================
    float pib_per_capita1 = pib1 * 1000000000 / populacao1; // PIB per capita da carta 1
    float pib_per_capita2 = pib2 * 1000000000 / populacao2; // PIB per capita da carta 2
    // PIB é dado em bilhões de reais, então multiplicamos por 1 bilhão 
    
    //=======================================
    // Imprimindo os dados da carta 1 na tela
    //=======================================

    printf ("\nCarta 1\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %c%s\n", estado1, codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf ("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf ("PIB per capita da carta 1: %.2f reais\n", pib_per_capita1);

    //=======================================
    // Imprimindo os dados da carta 2 na tela
    //=======================================

    printf ("\n---------------------------\n\n");
    printf ("Carta 2\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %c%s\n", estado2, codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf ("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    printf ("PIB per capita da carta 2: %.2f reais\n", pib_per_capita2);

    //Comparando os dados das cartas
    printf ("\n---------------------------\n\n");
    printf ("Comparação da população:\n");
    printf ("Cidade 1: %s\n", cidade1);
    printf ("Cidade 2: %s\n", cidade2);
    if (populacao1 > populacao2) {
        printf ("A cidade 1 possui maior população (%d) que a cidade 2 (%d).\n", populacao1, populacao2);
        printf ("A cidade de %s venceu!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf ("A carta 2 possui maior população (%d) que a carta 1 (%d).\n", populacao2, populacao1);
        printf ("A cidade de %s venceu!\n", cidade2);
    } else {
        printf ("As duas cartas possuem a mesma população (%d).\n", populacao1);
        printf ("Empate!\n");
    }
    
    printf ("\n---------------------------\n\n");
    printf ("Comparação da área:\n");
    printf ("Cidade 1: %s\n", cidade1);
    printf ("Cidade 2: %s\n", cidade2);

    if (area1 > area2) {
        printf ("A cidade 1 tem maior área (%f) que a cidade 2 (%f).\n", area1, area2);
        printf ("A cidade de %s venceu!\n", cidade1);
    } else if (area1 < area2) {
        printf ("A carta 2 possui maior área (%f) que a carta 1 (%f).\n", area1, area2);
        printf ("A cidade de %s venceu!\n", cidade2);
    } else {
        printf ("As duas cartas possuem a mesma área (%f).\n", area1);
        printf ("Empate!\n");
    }
     
    return 0;
}
