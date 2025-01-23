#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char CodigoDaCidade[10]; 
    char Nome[30]; 
    float Populacao;
    int Area;
    float PIB;
    int NumeroDePontosTuristicos;


    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", CodigoDaCidade); 

    printf("Digite o nome da Cidade: \n");
    scanf("%s", Nome); 

    printf("Digite a Quantidade Populacional: \n");
    scanf("%f", &Populacao);  

    printf("Adicione o Tamanho da Area: \n");
    scanf("%d", &Area); 

    printf("Adicione o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos); 
  
    printf("\n Informacoes Coletadas\n");
    printf("Codigo da Cidade: %s\n", CodigoDaCidade);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %f\n milhoes", Populacao);
    printf("Area: %d km²\n", Area);
    printf("PIB: %f\n milhoes", PIB);
    printf("Numero de Pontos Turisticos: %d\n", NumeroDePontosTuristicos);

    return 0;

}