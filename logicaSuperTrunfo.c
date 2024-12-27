#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int populacao;
    char estado[50];
    int ponto_turistico;
    char cidade[40];
    char codigo[8];
    float area;
    float pib;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Digite a População: \n");
    scanf("%d",&populacao);
    printf("Digite o Estado: \n");
    scanf("%s",&estado);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d",&ponto_turistico);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s",&cidade);
    printf("Digite o Código da Cidade: \n");
    scanf("%s",&codigo);
    printf("Digite a Área em Km²: \n");
    scanf("%f",&area);
    printf("Digite o PIB: \n");
    scanf("%f",&pib);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if ( > ) {
        printf("Temperatura está alta! \n");
    }   else {
        printf("Temperatura está dentro dos parâmetros!\n");
        }
    if (umidade > 50){
        printf("Umidade elevada!\n");
    }   else {
        printf("Umidade está dentro dos parâmetros!\n");
    }
    if (estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo!\n");
    }   else {
        printf("Estoque normal!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
