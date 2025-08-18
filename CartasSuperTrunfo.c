#include <stdio.h>

// Desafio Super Trunfo - Países - Jean Rocha
// Tema 1 - Cadastro das Cartas

int main() {
    
    //==============================================
    // declarando as variáveis para a primeira carta
    //==============================================
    
    char estado1; // armazena uma letra representativa de um Estado
    
    char codigo1 [4]; // armazena o código da carta
    
    char cidade1 [50]; // armazena o nome da cidade
    
    int populacao1; // armazena a população da cidade
    
    float area1; // armazena a área da cidade em km²
    
    float pib1; // armazena o PIB da cidade
    
    int pontos_turisticos1; //armazena a quantidade de pontos turísticos
    
    //=============================================
    // declarando as variáveis para a segunda carta
    //=============================================
    
    char estado2; // armazena uma letra representativa de um Estado
    
    char codigo2 [4]; // armazena o código da carta
    
    char cidade2 [50]; // armazena o nome da cidade
    
    int populacao2; // armazena a população da cidade
    
    float area2; // armazena a área da cidade em km²
    
    float pib2; // armazena o PIB da cidade
    
    int pontos_turisticos2; //armazena a quantidade de pontos turísticos

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

    printf ("\nAgora vamos digitar os dados da segunda carta.\n\nDigite uma letra representativa do Estado.\n\nVaria de 'A' a 'H': ");
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

    //=======================================
    // Imprimindo os dados da carta 1 na tela
    //=======================================

    printf ("\nCarta 1 :\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %c%s\n", estado1, codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Número de pontos turísticos: %d\n", pontos_turisticos1);

    //=======================================
    // Imprimindo os dados da carta 2 na tela
    //=======================================

    printf ("\n---------------------------\n\n");
    printf ("Carta 2 :\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %c%s\n", estado2, codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de pontos turísticos: %d\n", pontos_turisticos2);
     
    return 0;
}
