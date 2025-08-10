#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

 // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
   
    printf("SUPER TRUNFO\n\n");

    // As variáveis terminadas em 001 correspondem a carta 1, assim como as terminadas em 002 correspondem a carta 2;

    int nome_da_carta_001 = 001, nome_da_carta_002 = 002;
    char estado_001 = ('A'), estado_002 = ('B');
    char codigo_001[6] = ("001A"), codigo_002[6] = ("002B");
    char nome_cidade_001[20] = ("Fortaleza"), nome_cidade_002[20] = ("Rio de Janeiro");
    int populacao_001 = 2428678, populacao_002 = 6211223;
    char area_001[15] = ("313,80 km²"), area_002[15] = ("1.200,33 km²");
    float pib_001 = 73.4, pib_002 = 359.64;
    int pontos_turisticos_001 = 20, pontos_turisticos_002 = 60;

    // saida de dados da carta 1;

    printf("Nome da carta: %d\n", nome_da_carta_001);
    printf("Estado: %c\n", estado_001);
    printf("Código: %s\n", codigo_001);
    printf("Nome da cidade: %s\n", nome_cidade_001);
    printf("População: %d\n", populacao_001);
    printf("Área: %s\n", area_001);
    printf("PIB: %.2f bilhões de reais\n", pib_001);
    printf("Pontos turísticos: %d\n", pontos_turisticos_001);

    // saida de dados da carta 2;

    printf("Nome da carta: %d\n", nome_da_carta_002);
    printf("Estado: %c\n", estado_002);
    printf("Código: %s\n", codigo_002);
    printf("Nome da cidade: %s\n", nome_cidade_002);
    printf("População: %d\n", populacao_002);
    printf("Área: %s\n", area_002);
    printf("PIB: %.2f bilhões de reais\n", pib_002);
    printf("Pontos turísticos: %d\n", pontos_turisticos_002);



    return 0;
}
