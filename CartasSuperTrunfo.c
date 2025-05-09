#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



int main (){
    // desafio do jogo super trunfo
    

    //declarando as variaveis
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    // carta 1
    printf("Carta : 1\n");

    //recebendo os dados do estado
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    //recebendo o codigo da carta
    printf("Digite o codigo da primeira carta :\n");
    scanf("%s", &codigo);

    //recebendo o nome da cidade
    printf("Digite o nome da cidade :\n");
    scanf("%s", &cidade);

    //recebendo a população
    printf("Informe a população local :\n");
    scanf("%d", &populacao);

    //recebendo a area
    printf("Informe a area :\n");
    scanf("%f", &area);

    //recebendo o pib
    printf("Informe o pib :\n");
    scanf("%f", &pib);

    //recebendo os pontos turisticos
    printf("Informe quantos pontos turisticos temos nessa cidade :\n");
    scanf("%d", &pontos);


    //imprimindo os dados recebidos
    printf("Estado : %s\n", estado);
    printf("Código : %s\n", codigo);
    printf("Cidade : %s\n", cidade);
    printf("População : %d\n", populacao);
    printf("Area : %.2f\n", area);
    printf("Pib : %.2f\n", pib);
    printf("Pontos turisticos : %d\n", pontos);

    printf("");
    printf("");

    // carta 2
    printf("Carta : 2\n");

    //recebendo os dados do estado
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    //recebendo o codigo da carta
    printf("Digite o codigo da primeira carta :\n");
    scanf("%s", &codigo);

    //recebendo o nome da cidade
    printf("Digite o nome da cidade :\n");
    scanf("%s", &cidade);

    //recebendo a população
    printf("Informe a população local :\n");
    scanf("%d", &populacao);

    //recebendo a area
    printf("Informe a area :\n");
    scanf("%f", &area);

    //recebendo o pib
    printf("Informe o pib :\n");
    scanf("%f", &pib);

    //recebendo os pontos turisticos
    printf("Informe quantos pontos turisticos temos nessa cidade :\n");
    scanf("%d", &pontos);


    //imprimindo os dados recebidos
    printf("Estado : %s\n", estado);
    printf("Código : %s\n", codigo);
    printf("Cidade : %s\n", cidade);
    printf("População : %d\n", populacao);
    printf("Area : %.2f\n", area);
    printf("Pib : %.2f\n", pib);
    printf("Pontos turisticos : %d\n", pontos);



    return 0;
    
}
