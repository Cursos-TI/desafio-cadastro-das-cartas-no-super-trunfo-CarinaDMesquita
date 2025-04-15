#include <stdio.h>

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
    char cod_cidade1[6]; 
    char nome_cidade1[100]; 
    
    unsigned long int habitantes1; 

    int numeros_pontos_turistico1;
    int opcao;

    float area_km1; 
    float pib1; 
    float densidadePopu1;
    float perCapita1;
   
    // Variáveis declaradas Carta2 com os atributos da cidade.
    char estado2[3];
    char cod_cidade2[6];
    char nome_cidade2[100];

    unsigned long int habitantes2;
     
    int numeros_pontos_turistico2;
    
    float area_km2;
    float pib2; 
    float densidadePopu2;
    float perCapita2;
    
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
        
    printf ("ATENÇÂO: O Código da cidade deve conter a letra que foi digitada anteriormente para o estado seguida do número 01 à 04.\n");
    printf("Informe o Código da Cidade:\n"); 
    scanf(" %[^\n]",  &cod_cidade1); 
    //scanf("%s", &cod_cidade1); OBS: Dessa forma o scanf não lê espaços, causando problemas.

    printf("Informe o nome da Cidade:\n");
    scanf(" %[^\n]", nome_cidade1); // Dessa forma o código rodou normalmente sem apresentar problemas.
    //scanf("%s", &nome_cidade1); OBS: Dessa forma o scanf não lê espaços, causando problemas.

    printf("Informe o número de Habitantes:\n");
    scanf("%lu", &habitantes1);

    printf("Informe o total da Área km² da Cidade:\n");
    scanf("%f", &area_km1);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos túristicos tem nessa Cidade:\n");
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


    printf ("ATENÇÂO: O código da cidade deve conter a letra do estado seguida do número 01 à 04.\n");
    printf("Informe o Código da Cidade:\n"); 
    scanf(" %[^\n]", cod_cidade2);
    //scanf("%s", &cod_cidade2); OBS: Dessa forma o scanf não lê espaços, causando problemas.


    printf("Informe o nome da Cidade:\n");
    scanf(" %[^\n]", nome_cidade2); // Dessa forma o código rodou normalmente sem apresentar problemas.
    //scanf("%s", &nome_cidade2); OBS: Dessa forma o scanf não lê espaços, causando problemas.
   

    printf("Informe o número de Habitantes:\n");
    scanf("%lu", &habitantes2);

    printf("Informe o total da Área km² da Cidade:\n");
    scanf("%f", &area_km2);

    printf("Informe o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos túristicos tem nessa Cidade:\n");
    scanf("%d", &numeros_pontos_turistico2);
   
    // Cálculos Carta2: densidade Populacional, PIB per Capita  

    // Conversão Explicíta (Casting)
    densidadePopu2 = (float)(habitantes2) / area_km2;

    //Conversão Explicíta (Casting)
    perCapita2 = pib2 / (float)habitantes2;

    printf("\n"); 


    // COMPARAÇÃO ENTRE AS DUAS CARTAS USANDO A ESTRUTURA DE DECISÃO SWITCH E ESTRUTURAS DE DECISÕES ANINHADAS.

    // Menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas

    printf("--- MENU DE COMPARAÇÃO DAS CARTAS ---\n");
    printf("OPÇÃO 1: Comparar os Habitantes\n");
    printf("OPÇÃO 2: Comparar a Área km²\n");
    printf("OPÇÃO 3: Comparar o PIB\n");
    printf("OPÇÃO 4: Comparar os Pontos Turísticos\n");
    printf("OPÇÃO 5: Comparar a Densidade Demográfica\n");
    printf("Escolha uma Opção: \n");
    scanf("%d", &opcao);
    
    printf("Carta 1 %s  --  Carta 2  %s\n",nome_cidade1, nome_cidade2);

    switch (opcao) // estrutura de decisão switch 
    {
    case 1:
        printf("O atributo escolhido nessa comparação é: HABITANTES\n");
        printf("Os Valores dos Atributos das cartas são: CARTA 1: %lu  --  CARTA 2: %lu\n", habitantes1, habitantes2);
        if(habitantes1 == habitantes2) { // estrutura de decisão encadeada usando if - else if - else
            printf("RESULTADO: CARTA 1 -- CARTA 2 EMPATARAM!\n", habitantes1, habitantes2);
        } else if (habitantes1 > habitantes2) {
            printf("RESULTADO: CARTA 1 - A Cidade de (%s), com (%lu) Habitantes VENCEU!\n", nome_cidade1, habitantes1);
        } else {
            printf("RESULTADO: CARTA 2 - A Cidade de (%s), com (%lu) Habitantes VENCEU!\n", nome_cidade2,  habitantes2); 
        } 
        break;
    case 2:
        printf("O atributo escolhido na comparação é: ÁREA km² \n");
        printf("Os Valores dos Atributos das cartas são: CARTA 1: %.2f  --  CARTA 2: %.2f\n", area_km1, area_km2);
        if(area_km1 == area_km2) { // estrutura de decisão encadeada usando if - else if - else
            printf("RESULTADO: CARTA 1 -- Carta 2 EMPATARAM!\n", area_km1, area_km2);
        } else if (area_km1 > area_km2) {
            printf("RESULTADO: CARTA 1 - A Cidade de (%s), com a área km² (%.2f) VENCEU!\n", nome_cidade1, area_km1);
        } else {
            printf("RESULTADO: CARTA 2 - A Cidade de (%s), com a área km² (%.2f) VENCEU!\n", nome_cidade2, area_km2); 
        } 
        break;
    case 3:
        printf("O atributo escolhido na comparação é: PIB \n");
        printf("Os Valores dos Atributos das cartas são: CARTA 1: %.2f   --   CARTA 2: %.2f\n", pib1, pib2);
        if(pib1 == pib2) { // estrutura de decisão encadeada usando if - else if - else
            printf("RESULTADO: CARTA 1 -- CARTA 2 EMPATARAM!\n", pib1, pib2);
        } else if (pib1 > pib2) {
            printf("RESULTADO: CARTA 1 - A Cidade de (%s), com o PIB (R$ %.2f) VENCEU!\n", nome_cidade1, pib1);
        } else {
            printf("RESULTADO: CARTA 2 - A Cidade de (%s), com o PIB (R$ %.2f) VENCEU!\n", nome_cidade2, pib2); 
        } 
        break;
    case 4:
        printf("O atributo escolhido na comparação é: PONTOS TURÍSTICOS\n");
        printf("Os Valores dos Atributos das cartas são: CARTA 1: %d   --   CARTA 2: %d\n", numeros_pontos_turistico1, numeros_pontos_turistico2);
        if(numeros_pontos_turistico1 == numeros_pontos_turistico2){ // estrutura de decisão encadeada usando if - else if - else
            printf("RESULTADO: CARTA 1 -- CARTA 2 EMPATARAM!\n", numeros_pontos_turistico1, numeros_pontos_turistico2); 
        } else if (numeros_pontos_turistico1 > numeros_pontos_turistico2) {
            printf("RESULTADO: CARTA 1 - A Cidade de (%s), com (%d) Pontos Turísticos VENCEU!\n", nome_cidade1, numeros_pontos_turistico1);  
        } else {
            printf("RESULTADO: CARTA 2 - A Cidade de (%s), com (%d) Pontos Turísticos VENCEU!\n", nome_cidade2, numeros_pontos_turistico2); 
        }
        break;
    case 5:
        printf("O atributo escolhido na comparação é: DENSIDADE DEMOGRÁFICA\n");
        printf("Os Valores dos Atributos das cartas são: CARTA 1: %.2f   --   CARTA 2: %.2f\n", densidadePopu1, densidadePopu2);
        if(densidadePopu1 == densidadePopu2) { // estrutura de decisão encadeada usando if - else if - else
            printf("RESULTADO: CARTA 1 -- CARTA 2 EMPATARAM!\n", densidadePopu1, densidadePopu2);
        } else if (densidadePopu1 < densidadePopu2) {
            printf("RESULTADO: CARTA 1 - A Cidade de (%s), com a Densidade Demográfica (%.2f) VENCEU!\n", nome_cidade1, densidadePopu1);
        } else {
            printf("RESULTADO: CARTA 2 - A Cidade de (%s), com a Densidade Demográfica (%.2f) VENCEU!\n", nome_cidade2, densidadePopu2); 
        } 
        break;    
    default:
        printf("OPÇÃO INVÁLIDA!!!\n");
        break;
    }

    printf("\n"); 
    
    printf("FIM DO JOGO!!! \n");
    printf("OBRIGADO(A)!!! \n");

    return 0;

}
