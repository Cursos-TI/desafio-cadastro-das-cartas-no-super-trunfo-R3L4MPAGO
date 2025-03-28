#include <stdio.h>

#include <stdio.h>

int main(){

    // VARIÁVEIS DA CARTA 1
    char Estado_1;
    char Codigo_1[5];

    char NomeDaCidade_1[20];
    int Populacao_1;
    float Area_1;
    float PIB_1;
    int PontosTuristicos_1;

    float DensidadePopulacional_1;
    float PIBperCapita_1;

    // VARIÁVEIS DA CARTA 2
    char Estado_2;
    char Codigo_2[5];

    char NomeDaCidade_2[20];
    int Populacao_2;
    float Area_2;
    float PIB_2;
    int PontosTuristicos_2;

    float DensidadePopulacional_2;
    float PIBperCapita_2;

    // CARTA 1
    printf("\n===== CARTA 1 =====\n");
    printf("Carta 1: Uma letra de 'A' a 'H': [char] \n");
    scanf(" %c", &Estado_1);

    printf("Carta 1: Insira a letra do estado seguida de um número de 01 a 04: [char[5]] \n");
    scanf(" %s", Codigo_1);
        
    printf("Carta 1: Insira o nome da cidade (sem espaços e sem acentos): [char[20]] \n");
    scanf(" %s", NomeDaCidade_1);
        
    printf("Carta 1: Insira o número de habitantes: [int] \n");
    scanf(" %d", &Populacao_1);
        
    printf("Carta 1: Insira a área da cidade em quilômetros quadrados: [float] \n");
    scanf(" %f", &Area_1);
        
    printf("Carta 1: Insira o Produto Interno Bruto da cidade: [float] \n");
    scanf(" %f", &PIB_1);

    printf("Carta 1: Insira a quantidade de pontos turísticos: [int] \n");
    scanf(" %d", &PontosTuristicos_1);

    // CARTA 2
    printf("\n===== CARTA 2 =====\n");
    printf("Carta 2: Uma letra de 'A' a 'H': [char] \n");
    scanf(" %c", &Estado_2);

    printf("Carta 2: Insira a letra do estado seguida de um número de 01 a 04: [char[5]] \n");
    scanf(" %s", Codigo_2);
        
    printf("Carta 2: Insira o nome da cidade (sem espaços e sem acentos): [char[20]] \n");
    scanf(" %s", NomeDaCidade_2);
        
    printf("Carta 2: Insira o número de habitantes: [int] \n");
    scanf(" %d", &Populacao_2);
        
    printf("Carta 2: Insira a área da cidade em quilômetros quadrados: [float] \n");
    scanf(" %f", &Area_2);
        
    printf("Carta 2: Insira o Produto Interno Bruto da cidade: [float] \n");
    scanf(" %f", &PIB_2);

    printf("Carta 2: Insira a quantidade de pontos turísticos: [int] \n");
    scanf(" %d", &PontosTuristicos_2);

    DensidadePopulacional_1 = Populacao_1 / Area_1;
    DensidadePopulacional_2 = Populacao_2 / Area_2;

    PIBperCapita_1 = PIB_1 / Populacao_1;
    PIBperCapita_2 = PIB_2 / Populacao_2;

    printf("\n===== CARTA 1 ===== \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", Estado_1, Codigo_1, NomeDaCidade_1, Populacao_1, Area_1, PIB_1, PontosTuristicos_1, DensidadePopulacional_1, PIBperCapita_1);
    printf("\n===== CARTA 2 ===== \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f", Estado_2, Codigo_2, NomeDaCidade_2, Populacao_2, Area_2, PIB_2, PontosTuristicos_2, DensidadePopulacional_2, PIBperCapita_2);

    return 0;
}