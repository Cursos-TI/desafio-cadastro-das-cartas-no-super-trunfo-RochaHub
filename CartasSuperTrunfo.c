#include <stdio.h>

// Desafio Super Trunfo - Países - Jean Rocha
// Tema 1 - Cadastro das Cartas

int main() {
    // declarando as variáveis
    
    char Estado;
    char Codigo [2];
    char Cidade [20];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;

    // interagindo com o usuário e coletando as entradas
    // sintaxe do scanf "%formato1 %formato2 %formato3", &variavel1, &variavel2, &variavel3

    printf ("Digite uma letra representativa do Estado. Varia de 'A' a 'H'");
    scanf ("%c", &Estado);

    printf ("Digite o Código da Carta com 2 algarismos numéricos");
    scanf ("%s", &Codigo);
    
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
