#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas 
// As cartas contém informações sobre cada Cidade
// Essas informações serão exibidas na tela ápos o usuário finalizar a entrada com os dados de cada carta.
// Teste Carina Dias

int main() {

    // Variáveis declaradas e atributos das cidades. 
    // Esses são os atributos: estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1; 
    char cod_cidade1[4]; 
    char nome_cidade1[65]; 
    int habitantes1; 
    float area_km1; 
    float pib1; 
    int numeros_pontos_turistico1;

    char estado2[2];
    char cod_cidade2[4];
    char nome_cidade2[65];
    int habitantes2;
    float area_km2;
    float pib2; 
    int numeros_pontos_turistico2;


    // Inicio do jogo 

    printf("OLÁ SEJA BEM VINDO(A) AO JOGO DE CARTAS SUPER TRUNFO!!!\n\n");
    printf("VAMOS COMEÇAR? BOA SORTE E ÓTIMO JOGO!!!\n\n");


    // Cadastro CARTA 1:
    // Função printf para a saída de dados fornecendo as informações ao usuário sobre os atributos da cidade Carta 1.
    //Função scanf capturando as entradas do usuário para cada atributo da cidade Carta 1.

    printf("CARTA 1\n");

    printf("Informe o Estado:\n");
        printf ("ATENÇÃO: A LETRA DEVE SER MAIÚSCULA E TAMBÉM DEVE CONTER APENAS UMA LETRA DE 'A' A 'H'.\n");
    scanf("%c", &estado1);

    printf("Informe o Código da Cidade:\n"); 
        printf ("ATENÇÂO: O CÓDIGO DA CIDADE DEVE CONTER A LETRA DO ESTADO SEGUIDA DE UM NÚMERO DE 01 a 04. \n");
    scanf("%s", &cod_cidade1);

    printf("Informe o nome da Cidade:\n");
    scanf("%s", &nome_cidade1);

    printf("Informe o número de Habitantes:\n");
    scanf("%d", &habitantes1);

    printf("Informe o total da Área km² da Cidade:\n");
    scanf("%f", &area_km1);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos túristicos tem nessa Cidade:\n");
    scanf("%d", &numeros_pontos_turistico1);
    printf("\n\n");

    
    // Cadastro CARTA 2:
    // Função printf para a saída de dados fornecendo as informações ao usuário sobre os atributos da cidade Carta 2.
    //Função scanf capturando as entradas do usuário para cada atributo da cidade Carta 2.

    printf("CARTA 2\n");

    printf("Informe o Estado:\n");
        printf ("ATENÇÂO: A letra dever ser MAIÚSCULA e também deve conter apenas uma letra de 'A' a 'H'.\n");
    scanf("%s", &estado2);

    printf("Informe o Código da Cidade:\n"); 
        printf ("ATENÇÂO: O código da cidade deve conter a letra do estado seguida de um número de 01 a 04. \n");
    scanf("%s", &cod_cidade2);

    printf("Informe o nome da Cidade:\n");
    scanf("%s", &nome_cidade2);

    printf("Informe o número de Habitantes:\n");
    scanf("%d", &habitantes2);

    printf("Informe o total da Área km² da Cidade:\n");
    scanf("%f", &area_km2);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos túristicos tem nessa Cidade:\n");
    scanf("%d", &numeros_pontos_turistico2);
    printf("\n\n");
    
    printf("RESULTADO FINAL\n\n");

    // Exibição dos dados da CARTA 1:
    // Função printf exibindo as informações e os valores de cada atributo da cidade cadastrada Carta 1
    
    printf("CARTA 1\n");   
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", cod_cidade1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Habitantes: %d\n", habitantes1);
    printf("Área: %.1f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de pontos Turísticos: %d\n", numeros_pontos_turistico1);
    printf("\n");

    
    // Exibição dos dados da CARTA 2:
    // Função printf exibindo as informações e os valores de cada atributo da cidade cadastrada Carta 2 
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Cidade: %s\n", cod_cidade2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Habitantes: %d\n", habitantes2);
    printf("Área: %.1f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos Turísticos: %d\n", numeros_pontos_turistico2);
    printf("\n");


    printf("FIM DO JOGO!!! \n\n");
    printf("OBRIGADO(A)!!! \n");


    return 0;

}
