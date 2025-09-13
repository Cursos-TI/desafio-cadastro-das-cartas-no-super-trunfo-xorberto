#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado_1;
    char codigo_carta_1[4];
    char nome_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // Dados da segunda carta
    char estado_2;
    char codigo_carta_2[4];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Diálogo com o usuário para inserir os dados da primeira carta
    printf("\nInsira os dados da primeira carta:");
    printf("\nEscolha uma letra para representar o estado (de 'A' a 'H'): ");
    scanf(" %c", &estado_1);

    printf("Insira o código da carta (A letra do estado seguida por um número de 01 a 04): ");
    scanf("%3s", codigo_carta_1);

    printf("Insira o nome da cidade: ");
    scanf("%49s", nome_cidade_1);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_1);

    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib_1);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    // Diálogo com o usuário para inserir os dados da segunda carta
    printf("\nInsira os dados da segunda carta:");
    printf("\nEscolha uma letra para representar o estado (de 'A' a 'H'): ");
    scanf(" %c", &estado_2);

    printf("Insira o código da carta (A letra do estado seguida por um número de 01 a 04): ");
    scanf("%3s", codigo_carta_2);

    printf("Insira o nome da cidade: ");
    scanf("%49s", nome_cidade_2);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_2);

    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib_2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    // Exibir os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);

    // Exibir os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);

    return 0;
}