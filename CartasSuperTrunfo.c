#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int pop1,pnt_turistico1,pop2,pnt_turistico2;
    float area1,pib1,area2,pib2;
    char nome_cidade1[30],nome_cidade2[30];
    char cod_carta1[3],cod_carta2[3];
    char estado1,estado2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("--Para carta 1--");
    //estado
    printf("digite o estado (de A ate H):");
    scanf("%c",&estado1);
    //codigo do estado
    printf("digite o codigo do estado(de 1 a 4):");
    scanf("%s",&cod_carta1);
    //nome da cidade
    printf("digite o nome da cidade:");
    scanf("%s",&nome_cidade1);
    //populaçao
    printf("digite o numero da população:");
    scanf("%d",&pop1);
    //area
    printf("digite a area(em km²):");
    scanf("%f",&area1);
    //pib
    printf("digite o PIB:");
    scanf("%f",&pib1);
    //pontos turisticos
    printf("digite a quantidade de pontos turisticos da cidade:");
    scanf("%d",&pnt_turistico1);

     printf("--Para carta 2--");
    //estado
    printf("digite o estado (de A ate H):");
    scanf("%c",&estado2);
    //codigo do estado
    printf("digite o codigo do estado(de 1 a 4):");
    scanf("%s",&cod_carta2);
    //nome da cidade
    printf("digite o nome da cidade:");
    scanf("%s",&nome_cidade2);
    //populaçao
    printf("digite o numero da população:");
    scanf("%d",&pop2);
    //area
    printf("digite a area(em km²):");
    scanf("%f",&area2);
    //pib
    printf("digite o PIB:");
    scanf("%f",&pib2);
    //pontos turisticos
    printf("digite a quantidade de pontos turisticos da cidade:");
    scanf("%d",&pnt_turistico2);
    
    printf("Carta 2 \n");
    printf("Estado:%c \n",estado2);
    printf("Codigo:%s \n",cod_carta2);
    printf("Nome da cidade:%s \n",nome_cidade2);
    printf("População:%d \n",pop2);
    printf("área (em Km²):%f \n",area2);
    printf("PIB:%f \n",pop2);
    printf("Numero de Pontos Turísticos:%d \n",pnt_turistico2);
   
    return 0;
}
