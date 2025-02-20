#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

void exibirCarta(int numero, char* estado, char* codigo, char* nome, int* populacao, float* km, float* pib, int* pontoTuristico) {
    printf("\n ");
    printf("Carta: %i \n", numero);
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %i \n", &populacao);
    printf("Area: %f km\n", &km);
    printf("PIB: %f bilhões de reais\n", &pib);
    printf("Número de Pontos Turísticos: %i \n", &pontoTuristico);
    printf("\n ");
}

int main() {

    char estado1[50] = " ";
    char codigo1[50] = " ";
    char nome1[50] = " ";
    int populacao1;
    int pontoTuristico1;
    float km1;
    float pib1;

    printf("Carta 1 - Insira o Estado\n");
    scanf_s("%s", &estado1);
    printf("Carta 1 - Insira o Codigo\n");
    scanf_s("%s", &codigo1);
    printf("Carta 1 - Insira o Nome da Cidade\n");
    scanf_s("%s", &nome1);
    printf("Carta 1 - Insira a População da Cidade\n");
    scanf_s("%i", &populacao1);
    printf("Carta 1 - Insira a Ponto Turistico\n");
    scanf_s("%i", &pontoTuristico1);
    printf("Carta 1 - Insira a Área Total da Cidade\n");
    scanf_s("%f", &km1);
    printf("Carta 1 - Insira a PIB da Cidade\n");
    scanf_s("%f", &pib1);
    printf("\n ");

    char estado2[50] = " ";
    char codigo2[50] = " ";
    char nome2[50] = " ";
    int populacao2;
    int pontoTuristico2;
    float km2;
    float pib2;

    printf("\n ");
    printf("Carta 2 - Insira o Estado\n");
    scanf("%s", &estado2);
    printf("Carta 2 - Insira o Codigo\n");
    scanf("%s", &codigo2);
    printf("Carta 2 - Insira o Nome da Cidade\n");
    scanf("%s", &nome2);
    printf("Carta 2 - Insira a População da Cidade\n");
    scanf("%i", &populacao2);
    printf("Carta 2 - Insira a Ponto Turistico\n");
    scanf("%i", &pontoTuristico2);
    printf("Carta 2 - Insira a Área Total da Cidade\n");
    scanf("%f", &km2);
    printf("Carta 2 - Insira a PIB da Cidade\n");
    scanf("%f", &pib2);

    exibirCarta(1, estado1, codigo1, nome1, &populacao1, &km1, &pib1, &pontoTuristico1);
    exibirCarta(2, estado2, codigo2, nome2, &populacao2, &km2, &pib2, &pontoTuristico2);

    return 0;
}
