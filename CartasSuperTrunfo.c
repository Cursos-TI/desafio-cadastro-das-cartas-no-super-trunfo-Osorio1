#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int pop,pnt_turistico;
    float area,pib;
    char nome_cidade[30];
    char cod_carta[3];
    char estado;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("--Para carta 1--");
    //estado
    printf("digite o estado (de A ate H):");
    scanf("%c",&estado);
    //codigo do estado
    printf("digite o codigo do estado(de 1 a 4):");
    scanf("%s",&cod_carta);
    //nome da cidade
    printf("digite o nome da cidade:");
    scanf("%s",&nome_cidade);
    //populaçao
    printf("digite o numero da população:");
    scanf("%d",&pop);
    //area
    printf("digite a area(em km²):");
    scanf("%f",&area);
    //pib
    printf("digite o PIB:");
    scanf("%f",&pib);
    //pontos turisticos
    printf("digite a quantidade de pontos turisticos da cidade:");
    scanf("%d",&pnt_turistico);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1 \n");
    printf("Estado:%c \n",estado);
    printf("Codigo:%s \n",cod_carta);
    printf("Nome da cidade:%s \n",nome_cidade);
    printf("População:%d \n",pop);
    printf("área (em Km²):%f \n",area);
    printf("PIB:%f \n",pop);
    printf("Numero de Pontos Turísticos:%d \n",pnt_turistico);
   
    return 0;
}
