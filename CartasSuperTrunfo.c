#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas 
// As cartas contém informações sobre cada Cidade
// Essas informações serão exibidas na tela ápos o usuário finalizar a entrada com os dados de cada carta.
// Teste Carina Dias

int main() {

    // Inicio do jogo 
    printf("OLÁ SEJA BEM VINDO(A) AO JOGO DE CARTAS SUPER TRUNFO!!!\n\n");
    printf("VAMOS COMEÇAR? BOA SORTE E ÓTIMO JOGO!!!\n\n");

    /*  
        Atributos para as duas Cartas: estado, código da cidade, nome da cidade, habitantes
        área, PIB, número de pontos turísticos, densidade populacional, PIB per Capita, super poder. 
    */

    // Variáveis declaradas Carta1 com os atributos da cidade.
    char estado1; 
    char cod_cidade1[4]; 
    char nome_cidade1[65]; 
    
    unsigned long int habitantes1; 

    int numeros_pontos_turistico1;
    
    float area_km1; 
    float pib1; 
    float densidadePopu1;
    float perCapita1;
    float superPoder1;

    // Variáveis declaradas Carta2 com os atributos da cidade.
    char estado2[2];
    char cod_cidade2[4];
    char nome_cidade2[65];

    unsigned long int habitantes2;
     
    int numeros_pontos_turistico2;
    
    float area_km2;
    float pib2; 
    float densidadePopu2;
    float perCapita2;
    float superPoder2;

    // variáveis declaradas para exibir a comparação das propriedades da Carta1 com as propriedades correspondentes da Carta2
    int resultadoHabitantes;
    int resultadoArea_km;
    int resultadoPib;
    int resultadoDensidadePopu;
    int resultadoPerCapita;
    int resultadoNumeros_pontos_turistico;
    int resultadoSuperPoder;

    /* 
        Cadastro CARTA 1:
        Função printf para a saída de dados fornecendo as informações ao usuário sobre os atributos 
        da cidade Carta 1.
        Função scanf capturando as entradas do usuário para cada atributo da cidade Carta 1.
    */
    printf("CARTA 1\n");

    printf ("ATENÇÃO: A letra dever ser maiúscula e deve conter apenas uma letra de 'A' à 'H'.\n");
    printf("Informe o Estado:\n");
    scanf(" %c", &estado1);
        
    printf ("ATENÇÂO: O Código da cidade deve conter a letra que foi digitada anteriormente para o estado seguida do número 01 à 04.\n");
    printf("Informe o Código da Cidade:\n"); 
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

    // Cálculos Carta1: densidade Populacional, PIB per Capita e super poder 
    
    // Conversão Explicíta (Casting)
    densidadePopu1 = (float)(habitantes1) / area_km1;
    
    //Conversão Explicíta (Casting)
    perCapita1 = pib1 / (float)habitantes1;

     // Somando todos os atributos numéricos e o inverso da densidade populacional
     superPoder1 = habitantes1 + area_km1 + pib1 + numeros_pontos_turistico1 + perCapita1 + (1 / densidadePopu1);


    printf("\n\n");
    
    /* 
        Cadastro CARTA 2:
        Função printf para a saída de dados fornecendo as informações ao usuário sobre os atributos 
        da cidade Carta 2.
        Função scanf capturando as entradas do usuário para cada atributo da cidade Carta 2.
    */
    printf("CARTA 2\n");

    printf ("ATENÇÂO: A letra dever ser maiúscula e deve conter apenas uma letra de 'A' à 'H'.\n");
    printf("Informe o Estado:\n");
    scanf("%s", &estado2);

    printf ("ATENÇÂO: O código da cidade deve conter a letra do estado seguida do número 01 à 04.\n");
    printf("Informe o Código da Cidade:\n"); 
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
   
    // Cálculos Carta2: densidade Populacional, PIB per Capita e super poder 

    // Conversão Explicíta (Casting)
    densidadePopu2 = (float)(habitantes2) / area_km2;

    //Conversão Explicíta (Casting)
    perCapita2 = pib2 / (float)habitantes2;

    // Somando todos os atributos numéricos e o inverso da densidade populacional
    superPoder2 = habitantes2 + area_km2 + pib2 + numeros_pontos_turistico2 + perCapita2 + (1 / densidadePopu2);

    printf("\n"); 

    // Exibição dos dados da CARTA 1:
    // Função printf exibindo as informações e os valores de cada atributo da cidade cadastrada Carta 1   
    printf("CARTA 1: \n");   
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", cod_cidade1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Habitantes: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de pontos Turísticos: %d\n", numeros_pontos_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopu1);
    printf("PIB per Capita: %.2f reais\n", perCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");
    
    // Exibição dos dados da CARTA 2:
    // Função printf exibindo as informações e os valores de cada atributo da cidade cadastrada Carta 2 
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Cidade: %s\n", cod_cidade2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Habitantes: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos Turísticos: %d\n", numeros_pontos_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopu2);
    printf("PIB per Capita: %.2f reais\n", perCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação das Cartas usando os Operadores Relacionais
    
    resultadoHabitantes = habitantes1 > habitantes2;

    resultadoArea_km = area_km1 > area_km2;

    resultadoPib = pib1 > pib2;

    resultadoDensidadePopu = densidadePopu1 < densidadePopu2;

    resultadoPerCapita = perCapita1 > perCapita2;

    resultadoNumeros_pontos_turistico = numeros_pontos_turistico1 > numeros_pontos_turistico2;

    resultadoSuperPoder = superPoder1 > superPoder2;

    // COMPARAÇÃO DAS CARTAS
    // Exibindo a comparação das duas cartas com os atributos: habitantes, área, PIB, números de
    // pontos turísticos, densidade populacional, PIB per Capita e super poder. 
    printf("COMPARAÇÃO DAS CARTAS\n");

    //condição ? expressão_verdadeira : expressão_falsa;
    // comparação habitantes
    printf("Habitantes: %s venceu (%d)\n", (resultadoHabitantes == 0 ? "Carta 2":"Carta 1"), resultadoHabitantes);
    
    //comparação da Área
    printf("Área: %s venceu (%d)\n", (resultadoArea_km == 0 ? "Carta 2":"Carta 1"), resultadoArea_km);

    //comparação do PIB
    printf("PIB: %s venceu (%d)\n", (resultadoPib == 0 ? "Carta 2":"Carta 1"), resultadoPib);

    //comparação dos pontos turísticos
    printf("Números de pontos Turísticos: %s venceu (%d)\n", (resultadoNumeros_pontos_turistico == 0 ? "Carta 2":"Carta 1"), resultadoNumeros_pontos_turistico);

    // comparação da densidade populacional
    printf("Densidade Populacional: %s venceu (%d)\n",(resultadoDensidadePopu == 0 ? "Carta 2":"Carta 1"), resultadoDensidadePopu);

    // comparação do PIB per Capita
    printf("PIB per Capita: %s venceu (%d)\n", (resultadoPerCapita == 0 ? "Carta 2":"Carta 1"), resultadoPerCapita);

    // comparação Super poder
    printf("Super Poder: %s venceu (%d)\n", (resultadoSuperPoder == 0 ? "Carta 2":"Carta 1"), resultadoSuperPoder);
    printf("\n");

    printf("FIM DO JOGO!!! \n");
    printf("OBRIGADO(A)!!! \n");

    return 0;

}

