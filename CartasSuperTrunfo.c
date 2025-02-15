#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Carina Dias

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variáveis declaradas para cada atributo.

    char estado[2];
    char cod_cidade[6];
    char nome_cidade[40];
    int habitantes;
    float area_km;
    float pib; 
    int numeros_pontos_turistico;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("OLÁ SEJA BEM VINDO AO JOGO DE CARTAS SUPER TRUNFO!!!\n\n");
    printf("VAMOS COMEÇAR? BOA SORTE E ÓTIMO JOGO!!!\n\n\n");

    printf("Informe o Estado:\n");
    scanf("%s", &estado);

    printf("Informe o Código da Cidade:\n");
    scanf("%s", &cod_cidade);

    printf("Informe o nome da Cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Informe o número de Habitantes:\n");
    scanf("%d", &habitantes);

    printf("Informe o total da Área km² da Cidade\n");
    scanf("%f", &area_km);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib);

    printf("Informe quantos pontos túristicos tem nessa Cidade: \n");
    scanf("%d", &numeros_pontos_turistico);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado);
    printf("Código da Cidade: %s\n", cod_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Habitantes: %d\n", habitantes);
    printf("Área km²: %4.f\n", area_km);
    printf("PIB: %3.f\n", pib);
    printf("Números de pontos Turísticos: %d\n\n", numeros_pontos_turistico);

    printf("OBRIGADO!!! \n");


    return 0;


}
