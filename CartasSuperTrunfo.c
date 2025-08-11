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

    int numero_da_carta_001, numero_da_carta_002;
    char estado_001, estado_002;
    char codigo_001[6], codigo_002[6];
    char nome_cidade_001[20], nome_cidade_002[20];
    int populacao_001, populacao_002;
    float area_001[15], area_002[15];
    float pib_001, pib_002;
    int pontos_turisticos_001, pontos_turisticos_002;

    // entrada de dados da carta 1;
    /* 
    
    para esse teste a carta 1 será referente a cidade de fortaleza 
    O número da carta será: 001
    A letra referente ao estado será: "A"
    O cdigo dessa carta será portanto: "001A"
    O nome da cidade será: "Fortaleza"
    A população será: "2428678"
    A área será: 313.18
    O PIB será: 73.4
    A quantidade de pontos turísticos será: "20"
    
    */


    printf("É HORA DE JOGAR, FORNEÇA OS DADOS DA PRIMEIRA CARTA \n\n");

    printf("Digite o número da primeira carta: ");
    scanf("%d", &numero_da_carta_001);

    printf("Digite a letra referente ao estado de A - H: ");
    scanf("%c", &estado_001);

    printf("Digite o codigo da carta (o codigo deve ser o número da carta + a letra do estado): ");
    scanf("%s", codigo_001);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_001);

    printf("Digite a poupulação da cidade: ");
    scanf("%d", &populacao_001);

    printf("Digite a área da cidade em km2: ");
    scanf("%f", area_001);

    printf("Digite o PIB da cidade: ");
    scanf("%f", pib_001);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", pontos_turisticos_001);

    // entrada de dados da carta 2
    /* 
    
    para esse teste a carta 2 será referente a cidade de rio de janeiro 
    O número da carta será: 002
    A letra referente ao estado será: "B"
    O cdigo dessa carta será portanto: "002B"
    O nome da cidade será: "Rio de Janeiro"
    A população será: "6211223"
    A área será: 1200.33
    O PIB será: 359.64
    A quantidade de pontos turísticos será: "60"
    
    */


    printf("É HORA DE JOGAR, FORNEÇA OS DADOS DA SEGUNDA CARTA \n\n");

    printf("Digite o número da primeira carta: ");
    scanf("%d", &numero_da_carta_002);

    printf("Digite a letra referente ao estado de A - H: ");
    scanf("%c", &estado_002);

    printf("Digite o codigo da carta (o codigo deve ser o número da carta + a letra do estado): ");
    scanf("%s", codigo_002);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_002);

    printf("Digite a poupulação da cidade: ");
    scanf("%d", &populacao_002);

    printf("Digite a área da cidade: ");
    scanf("%f", area_002);

    printf("Digite o PIB da cidade: ");
    scanf("%f", pib_002);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", pontos_turisticos_002);

    // saida de dados da carta 1;

    printf("Nome da carta: %d\n", nome_da_carta_001);
    printf("Estado: %c\n", estado_001);
    printf("Código: %s\n", codigo_001);
    printf("Nome da cidade: %s\n", nome_cidade_001);
    printf("População: %d\n", populacao_001);
    printf("Área: %s km²\n", area_001);
    printf("PIB: %.2f bilhões de reais\n", pib_001);
    printf("Pontos turísticos: %d\n", pontos_turisticos_001);

    // saida de dados da carta 2;

    printf("Nome da carta: %d\n", nome_da_carta_002);
    printf("Estado: %c\n", estado_002);
    printf("Código: %s\n", codigo_002);
    printf("Nome da cidade: %s\n", nome_cidade_002);
    printf("População: %d\n", populacao_002);
    printf("Área: %s km²\n", area_002);
    printf("PIB: %.2f bilhões de reais\n", pib_002);
    printf("Pontos turísticos: %d\n", pontos_turisticos_002);



    return 0;
}
