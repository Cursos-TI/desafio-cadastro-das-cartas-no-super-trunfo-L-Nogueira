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

    // As variáveis terminadas em 01 correspondem a carta 1, assim como as terminadas em 02 correspondem a carta 2;

    char estado01, estado02;
    char codigo01[6], codigo02[6];
    char nome_cidade01[25], nome_cidade02[25];
    int populacao01, populacao02;
    float area_01, area_02;
    float pib01, pib02;
    int pontos_turisticos01, pontos_turisticos02;

    // entrada de dados da carta 1;
    /* 
    
    para esse teste a carta 1 será referente a cidade de fortaleza 
    O número da carta será: 01
    A letra referente ao estado será: "A"
    O cdigo dessa carta será portanto: "01A"
    O nome da cidade será: "Fortaleza"
    A população será: "2428678"
    A área será: 313.18
    O PIB será: 73.4
    A quantidade de pontos turísticos será: "20"
    
    */


    printf("É HORA DE JOGAR, FORNEÇA OS DADOS DA PRIMEIRA CARTA \n\n");

    printf("Digite a letra referente ao estado de A - H: ");
    scanf("%c", &estado01);

    printf("Digite o codigo da carta (o codigo deve ser o número da carta + a letra do estado): ");
    scanf("%s", codigo01);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade01);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao01);

    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_01);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos01);

    printf("\n\n");

    // entrada de dados da carta 2
    /* 
    
    para esse teste a carta 2 será referente a cidade de salvador 
    O número da carta será: 02
    A letra referente ao estado será: "B"
    O cdigo dessa carta será portanto: "02B"
    O nome da cidade será: "Salvador"
    A população será: "2417678"
    A área será: 693.8
    O PIB será: 62.9
    A quantidade de pontos turísticos será: "18"
    
    */


    printf("É HORA DE JOGAR, FORNEÇA OS DADOS DA SEGUNDA CARTA \n\n");

    printf("Digite a letra referente ao estado de A - H: ");
    scanf(" %c", &estado02);

    printf("Digite o codigo da carta (o codigo deve ser o número da carta + a letra do estado): ");
    scanf("%s", codigo02);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade02);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao02);

    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_02);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos02);

    printf("\n\n");
    printf("RESULTADOS\n\n");

    // saida de dados da carta 1;

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Pontos turísticos: %d\n", pontos_turisticos01);
    printf("\n\n");

    // saida de dados da carta 2;

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da cidade: %s\n", nome_cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Pontos turísticos: %d\n", pontos_turisticos02);

    printf("\n\n");

    return 0;
}
