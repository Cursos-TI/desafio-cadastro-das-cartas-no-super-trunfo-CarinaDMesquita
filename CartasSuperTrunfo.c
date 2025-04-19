#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das Cartas 
// As cartas contém informações sobre cada Cidade
// Essas informações serão exibidas na tela ápos o usuário finalizar a entrada com os dados de cada carta.
// Teste Carina Dias

int main() {

    // Inicio do jogo 
    printf("OLÁ SEJA BEM VINDO(A) AO JOGO DE CARTAS SUPER TRUNFO!!!\n\n");
    printf("VAMOS COMEÇAR? BOA SORTE E ÓTIMO JOGO!!!\n\n");


    /*  
        Atributos para as duas Cartas: estado, código da cidade, nome da cidade, habitantes
        área, PIB, número de pontos turísticos, densidade populacional, PIB per Capita. 
    */

    // Variáveis declaradas Carta1 com os atributos da cidade.
    char estado1 [3]; 
    char nome_cidade1[100]; 
    char primeiroAtributo;
    char segundoAtributo;    
    
    unsigned long int habitantes1; 

    int numeros_pontos_turistico1;
    int resultadoH1;
    int resultadoA1;
    int resultadoP1;
    int resultadoT1;
    int resultadoD1;
    int resultadoCartaVencedora;

    float area_km1; 
    float pib1; 
    float densidadePopu1;
    float perCapita1;
    float somaAtributosCarta1 = 0;
    


    // Variáveis declaradas Carta2 com os atributos da cidade.
    char estado2[3];
    char nome_cidade2[100];    

    unsigned long int habitantes2;
     
    int numeros_pontos_turistico2;
    int resultadoH2;
    int resultadoA2;
    int resultadoP2;
    int resultadoT2;
    int resultadoD2;


    float area_km2;
    float pib2; 
    float densidadePopu2;
    float perCapita2;
    float somaAtributosCarta2 = 0;
    
    /* 
        Cadastro CARTA 1:
        Função printf para a saída de dados fornecendo as informações ao usuário sobre os atributos 
        da cidade Carta 1.
        Função scanf capturando as entradas do usuário para cada atributo da cidade Carta 1.
    */
    printf("CARTA 1\n");

    printf("Informe o Estado:\n");
    scanf(" %[^\n]", estado1); 
    //scanf("%s", &estado1); OBS: Dessa forma o scanf não lê espaços, causando problemas.

    printf("Informe o nome da Cidade:\n");
    scanf(" %[^\n]", nome_cidade1); // Dessa forma o código rodou normalmente sem apresentar problemas.
    //scanf("%s", &nome_cidade1); OBS: Dessa forma o scanf não lê espaços, causando problemas.

    printf("Informe o número de Habitantes:\n");
    scanf("%lu", &habitantes1);

    printf("Informe o total da Área km² da Cidade:\n");
    scanf("%f", &area_km1);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos túristicos:\n");
    scanf("%d", &numeros_pontos_turistico1);



    // Cálculos Carta1: densidade Populacional, PIB per Capita  
    
    // Conversão Explicíta (Casting)
    densidadePopu1 = (float)(habitantes1) / area_km1;
    
    //Conversão Explicíta (Casting)
    perCapita1 = pib1 / (float)habitantes1;

    printf("\n\n");
    
    /* 
        Cadastro CARTA 2:
        Função printf para a saída de dados fornecendo as informações ao usuário sobre os atributos 
        da cidade Carta 2.
        Função scanf capturando as entradas do usuário para cada atributo da cidade Carta 2.
    */
    printf("CARTA 2\n");

    printf("Informe o Estado:\n");
    scanf(" %[^\n]", estado2);
    //scanf("%s", &estado2); OBS: Dessa forma o scanf não lê espaços, causando problemas.

    
    printf("Informe o nome da Cidade:\n");
    scanf(" %[^\n]", nome_cidade2); // Dessa forma o código rodou normalmente sem apresentar problemas.
    //scanf("%s", &nome_cidade2); OBS: Dessa forma o scanf não lê espaços, causando problemas.
   

    printf("Informe o número de Habitantes:\n");
    scanf("%lu", &habitantes2);

    printf("Informe o total da Área km² da Cidade:\n");
    scanf("%f", &area_km2);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos túristicos:\n");
    scanf("%d", &numeros_pontos_turistico2);
   
    // Cálculos Carta2: densidade Populacional, PIB per Capita  

    // Conversão Explicíta (Casting)
    densidadePopu2 = (float)(habitantes2) / area_km2;

    //Conversão Explicíta (Casting)
    perCapita2 = pib2 / (float)habitantes2;

    printf("\n"); 

    // COMPARAÇÃO COM DOIS ATRIBUTOS.

    // Menu interativo e dinâmico usando switch para que o jogador possa escolher os atributo de comparação entre as cartas

    printf("=== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS DAS CARTAS ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("H. Habitantes!\n");
    printf("A. Área km²!\n");
    printf("P. PIB!\n");
    printf("T. Pontos Turísticos!\n");
    printf("D. Densidade Populacional!\n");
    scanf(" %c", &primeiroAtributo);

    if (primeiroAtributo != 'H' && primeiroAtributo != 'h' && primeiroAtributo != 'A' && primeiroAtributo != 'a' && primeiroAtributo != 'P' && primeiroAtributo != 'p' && primeiroAtributo != 'T' && primeiroAtributo != 't' && primeiroAtributo != 'D' && primeiroAtributo != 'd') {
        printf("Opção Inválida! Reinicie o jogo.\n");
        return 1;
    } 

    /*Essa estrutura do switch elimina o atributo que foi escolhido pelo usuário no 
     Menu do primeiro atributo, com isso o atributo não irá aparecer no Menu do 
     segundo atributo.*/

    switch (primeiroAtributo)
    {
    case 'H':
    case 'h':
        printf("=== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS DAS CARTAS ===\n");
        printf("Escolha o segundo atributo:\n");
        //printf("H. Habitantes!\n"); 
        printf("A. Área km²!\n");
        printf("P. PIB!\n");
        printf("T. Pontos Turísticos!\n");
        printf("D. Densidade Populacional!\n"); 
        scanf(" %c", &segundoAtributo);
        break;
    case 'A':
    case 'a':
        printf("=== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS DAS CARTAS ===\n");
        printf("Escolha o segundo atributo:\n");
        printf("H. Habitantes!\n");
        //printf("A. Área km²!\n");
        printf("P. PIB!\n");
        printf("T. Pontos Turísticos!\n");
        printf("D. Densidade Populacional!\n");
        scanf(" %c", &segundoAtributo);
        break;
    case 'P':
    case 'p':
        printf("=== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS DAS CARTAS ===\n");
        printf("Escolha o segundo atributo:\n");
        printf("H. Habitantes!\n");
        printf("A. Área km²!\n");
        //printf("P. PIB!\n");
        printf("T. Pontos Turísticos!\n");
        printf("D. Densidade Populacional!\n");
        scanf(" %c", &segundoAtributo);
        break;
    case 'T':
    case 't':
        printf("=== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS DAS CARTAS ===\n");
        printf("Escolha o segundo atributo:\n");
        printf("H. Habitantes!\n");
        printf("A. Área km²!\n");
        printf("P. PIB!\n");
        //printf("T. Pontos Turísticos!\n");
        printf("D. Densidade Populacional!\n");
        scanf(" %c", &segundoAtributo);
        break; 
    case 'D':
    case 'd':
        printf("=== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS DAS CARTAS ===\n");
        printf("Escolha o segundo atributo:\n");
        printf("H. Habitantes!\n");
        printf("A. Área km²!\n");
        printf("P. PIB!\n");
        printf("T. Pontos Turísticos!\n");
        //printf("D. Densidade Populacional!\n");
        scanf(" %c", &segundoAtributo);
        break;   
    
    default:
        //printf("Opção Inválida! Reinicie o jogo.\n");
        break;
    }
    
    if (segundoAtributo != 'H' && segundoAtributo != 'h' && segundoAtributo != 'A' && segundoAtributo != 'a' && segundoAtributo != 'P' && segundoAtributo != 'p' && segundoAtributo != 'T' && segundoAtributo != 't' && segundoAtributo != 'D' && segundoAtributo != 'd') {
        printf("Opção Inválida! Reinicie o jogo.\n");
        return 1;
    } 

    printf("\n");

    printf("Carta 1 %s  ==  Carta 2  %s\n\n", nome_cidade1, nome_cidade2);


    // Exibição do primeiro atributo escolhido pelo usuário
    if (primeiroAtributo == 'H' || primeiroAtributo == 'h') {
        printf("Primeiro Atributo: Habitantes\n");
    } else if (primeiroAtributo == 'A' || primeiroAtributo == 'a') {
        printf("Primeiro Atributo: Área km²\n");
    } else if (primeiroAtributo == 'P' || primeiroAtributo == 'p') {
        printf("Primeiro Atributo: PIB\n");
    } else if (primeiroAtributo == 'T' || primeiroAtributo == 't') {
        printf("Primeiro Atributo: Pontos Turísticos\n");
    } else {
        printf("Primeiro Atributo: Densidade Populacional\n");
    }

    

    // Exibição do segundo atributo escolhido pelo usuário
    if (segundoAtributo == 'H' || segundoAtributo == 'h') {
        printf("Segundo Atributo: Habitantes\n");
    } else if (segundoAtributo == 'A' || segundoAtributo == 'a') {
        printf("Segundo Atributo: Área km²\n");
    } else if (segundoAtributo == 'P' || segundoAtributo == 'p') {
        printf("Segundo Atributo: PIB\n");
    } else if (segundoAtributo == 'T' || segundoAtributo == 't') {
        printf("Segundo Atributo: Pontos Turísticos\n");
    } else {
        printf("Segundo Atributo: Densidade Populacional\n");
    }

    printf("\n");

    // valores do primeiro atributo escolhido pelo usuário
    if (primeiroAtributo == 'H' || primeiroAtributo == 'h') {
        printf("Primeiro Atributo CARTA 1 - Valor Habitantes: %lu\n", habitantes1);
        printf("Primeiro Atributo CARTA 2 - Valor Habitantes: %lu\n", habitantes2);
        somaAtributosCarta1 += habitantes1;
        somaAtributosCarta2 += habitantes2;
    } else if (primeiroAtributo == 'A' || primeiroAtributo == 'a') {
        printf("Primeiro Atributo CARTA 1 - Valor Área km²: %.2f\n", area_km1);
        printf("Primeiro Atributo CARTA 2 - Valor Área km²: %.2f\n", area_km2);
        somaAtributosCarta1 += area_km1;
        somaAtributosCarta2 += area_km2; 
    } else if (primeiroAtributo == 'P' || primeiroAtributo == 'p') {
        printf("Primeiro Atributo CARTA 1 - Valor PIB %.2f\n", pib1);
        printf("Primeiro Atributo CARTA 2 - Valor PIB %.2f\n", pib2);
        somaAtributosCarta1 += pib1;
        somaAtributosCarta2 += pib2;
    } else if (primeiroAtributo == 'T' || primeiroAtributo == 't') {
        printf("Primeiro Atributo CARTA 1 - Valor Pontos Turísticos %d\n", numeros_pontos_turistico1);
        printf("Primeiro Atributo CARTA 2 - Valor Pontos Turísticos %d\n", numeros_pontos_turistico2);
        somaAtributosCarta1 += numeros_pontos_turistico1;
        somaAtributosCarta2 += numeros_pontos_turistico2;
    } else {
        printf("Primeiro Atributo CARTA 1 - Valor Densidade Populacional %.2f\n", densidadePopu1);
        printf("Primeiro Atributo CARTA 2 - Valor Densidade Populacional %.2f\n", densidadePopu2);
        somaAtributosCarta1 +=  densidadePopu1;
        somaAtributosCarta2 +=  densidadePopu2;
    }

    printf("\n");

     //valores do segundo atributo escolhido pelo usuário
     if (segundoAtributo == 'H' || segundoAtributo == 'h') {
        printf("Segundo Atributo CARTA 1 - Valor Habitantes: %lu\n", habitantes1);
        printf("Segundo Atributo CARTA 2 - Valor Habitantes: %lu\n", habitantes2);
        somaAtributosCarta1 += habitantes1;
        somaAtributosCarta2 += habitantes2;
    } else if (segundoAtributo == 'A' || segundoAtributo == 'a') {
        printf("Segundo Atributo CARTA 1 - Valor Área km²: %.2f\n", area_km1);
        printf("Segundo Atributo CARTA 2 - Valor Área km²: %.2f\n", area_km2);
        somaAtributosCarta1 += area_km1;
        somaAtributosCarta2 += area_km2;
    } else if (segundoAtributo == 'P' || segundoAtributo == 'p') {
        printf("Segundo Atributo CARTA 1 - Valor PIB %.2f\n", pib1);
        printf("Segundo Atributo CARTA 2 - Valor PIB %.2f\n", pib2);
        somaAtributosCarta1 += pib1;
        somaAtributosCarta2 += pib2;
    } else if (segundoAtributo == 'T' || segundoAtributo == 't') {
        printf("Segundo Atributo CARTA 1 - Valor Pontos Turísticos %d\n", numeros_pontos_turistico1);
        printf("Segundo Atributo CARTA 2 - Valor Pontos Turísticos %d\n", numeros_pontos_turistico2);
        somaAtributosCarta1 += numeros_pontos_turistico1;
        somaAtributosCarta2 += numeros_pontos_turistico2;
    } else {
        printf("Segundo Atributo CARTA 1 - Valor Densidade Populacional %.2f\n", densidadePopu1);
        printf("Segundo Atributo CARTA 2 - Valor Densidade Populacional %.2f\n", densidadePopu2);
        somaAtributosCarta1 += densidadePopu1;
        somaAtributosCarta2 += densidadePopu2;
    }

    printf("\n");

    //soma dos Atributos 
    printf("Soma dos atributos CARTA 1: %.2f\n", somaAtributosCarta1);
    printf("Soma dos atributos CARTA 2: %.2f\n", somaAtributosCarta2);

    printf("\n");
   
    /* Resultado da Carta vencedora 
    if (somaAtributosCarta1 == somaAtributosCarta2) { 
        printf("Empataram!\n");
    } else if (somaAtributosCarta1 > somaAtributosCarta2) { 
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n"); 
    }
    */ 

    //Resultado da Carta vencedora usando o ternário
    printf("%s\n", 
        (somaAtributosCarta1 == somaAtributosCarta2) ? "EMPATOU!" :
        (somaAtributosCarta1 > somaAtributosCarta2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
    

    printf("\n"); 
    
    printf("FIM DO JOGO!!! \n");
    printf("OBRIGADO(A)!!! \n");

    return 0;
}