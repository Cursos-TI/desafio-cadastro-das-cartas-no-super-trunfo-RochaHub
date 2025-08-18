#include <stdio.h>

// Desafio Super Trunfo - Países - Jean Rocha
// Tema 1 - Cadastro das Cartas

int main() {
    // declarando as variáveis
    
    char estado1; // armazena uma letra representativa de um Estado
    
    char codigo1 [2]; // armazena o código da carta
    
    char cidade1 [20]; // armazena o nome da cidade
    
    int populacao1; // armazena a população da cidade
    
    float area1; // armazena a área da cidade em km²
    
    float PIB1; // armazena o PIB da cidade
    
    int pontos_turisticos1; //armazena a quantidade de pontos turísticos

    // interagindo com o usuário e coletando as entradas
    // sintaxe do scanf "%formato1 %formato2 %formato3", &variavel1, &variavel2, &variavel3

    printf ("Digite uma letra representativa do Estado. Varia de 'A' a 'H': ");
    scanf ("%c", &estado);

    printf ("Digite o Código da Carta com 2 algarismos numéricos: ");
    scanf ("%s", &codigo);

    printf ("Digite o nome da Cidade: ");
    scanf ("%s", &cidade);

    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao);

    printf ("Digite a área da cidade em km²: );
    scanf ("%f", &area);

    

    
        
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
