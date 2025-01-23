

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char CodigoDaCidade[10]; 
    char Nome[30]; 
    float Populacao;
    int Area;
    float PIB;
    int NumeroDePontosTuristicos;

    // Cadastro das Cartas:
   
Estado(A): SP 

Código da Carta: A01
Nome da Cidade: São Paulo
População: 12.325.000
Área: 1.521,11 km²
PIB: 699,28 bilhões de reais
Número de Pontos Turísticos: 50

Código da Carta: A02
Nome da Cidade: Campinas
População: 1.223.000
Área: 794,57 km²
PIB: 88,68 bilhões de reais
Número de Pontos Turísticos: 25

Código da Carta: B01
Nome da Cidade: Santos
População: 433.311
Área: 281,01 km²
PIB: 45,83 bilhões de reais
Número de Pontos Turísticos: 30

Código da Carta: B02
Nome da Cidade: Ribeirão Preto
População: 720.116
Área: 652,28 km²
PIB: 37,84 bilhões de reais
Número de Pontos Turísticos: 20

Estado(B): RJ

Código da Carta: A01
Nome da Cidade: Rio de Janeiro
População: 6.747.000
Área: 1.221,00 km²
PIB: 420,40 bilhões de reais
Número de Pontos Turísticos: 60

Código da Carta: A02
Nome da Cidade: Niterói
População: 516.524
Área: 134,04 km²
PIB: 34,46 bilhões de reais
Número de Pontos Turísticos: 20

Código da Carta: B01
Nome da Cidade: Petrópolis
População: 307.678
Área: 796,92 km²
PIB: 12,17 bilhões de reais
Número de Pontos Turísticos: 35

Código da Carta: B02
Nome da Cidade: Volta Redonda
População: 273.988
Área: 182,81 km²
PIB: 16,90 bilhões de reais
Número de Pontos Turísticos: 10

Estado(C): MG

Código da Carta: A01
Nome da Cidade: Belo Horizonte
População: 2.530.000
Área: 331,40 km²
PIB: 108,30 bilhões de reais
Número de Pontos Turísticos: 40

Código da Carta: A02
Nome da Cidade: Uberlândia
População: 720.516
Área: 4.115,06 km²
PIB: 50,90 bilhões de reais
Número de Pontos Turísticos: 15

Código da Carta: B01
Nome da Cidade: Juiz de Fora
População: 573.285
Área: 1.437,97 km²
PIB: 23,41 bilhões de reais
Número de Pontos Turísticos: 20

Código da Carta: B02
Nome da Cidade: Montes Claros
População: 423.040
Área: 3.576,85 km²
PIB: 17,00 bilhões de reais
Número de Pontos Turísticos: 12

Estado(D): RS

Código da Carta: A01
Nome da Cidade: Porto Alegre
População: 1.483.771
Área: 496,68 km²
PIB: 98,06 bilhões de reais
Número de Pontos Turísticos: 35

Código da Carta: A02
Nome da Cidade: Caxias do Sul
População: 525.000
Área: 1.644,31 km²
PIB: 39,50 bilhões de reais
Número de Pontos Turísticos: 25

Código da Carta: B01
Nome da Cidade: Pelotas
População: 343.132
Área: 1.609,72 km²
PIB: 13,14 bilhões de reais
Número de Pontos Turísticos: 15

Código da Carta: B02
Nome da Cidade: Santa Maria
População: 285.159
Área: 1.823,61 km²
PIB: 13,60 bilhões de reais
Número de Pontos Turísticos: 10


Estado(E): PR

Código da Carta: A01
Nome da Cidade: Curitiba
População: 1.963.726
Área: 435,03 km²
PIB: 127,70 bilhões de reais
Número de Pontos Turísticos: 50

Código da Carta: A02
Nome da Cidade: Londrina
População: 580.870
Área: 1.652,08 km²
PIB: 40,29 bilhões de reais
Número de Pontos Turísticos: 20

Código da Carta: B01
Nome da Cidade: Maringá
População: 436.472
Área: 487,05 km²
PIB: 28,90 bilhões de reais
Número de Pontos Turísticos: 15

Código da Carta: B02
Nome da Cidade: Cascavel
População: 348.089
Área: 2.100,34 km²
PIB: 21,10 bilhões de reais
Número de Pontos Turísticos: 10

Estado(F): SC

Código da Carta: A01
Nome da Cidade: Florianópolis
População: 516.524
Área: 675,41 km²
PIB: 31,16 bilhões de reais
Número de Pontos Turísticos: 35

Código da Carta: A02
Nome da Cidade: Joinville
População: 620.143
Área: 1.127,00 km²
PIB: 45,20 bilhões de reais
Número de Pontos Turísticos: 20

Código da Carta: B01
Nome da Cidade: Blumenau
População: 366.418
Área: 519,84 km²
PIB: 21,48 bilhões de reais
Número de Pontos Turísticos: 15

Código da Carta: B02
Nome da Cidade: Chapecó
População: 224.013
Área: 625,01 km²
PIB: 13,50 bilhões de reais
Número de Pontos Turísticos: 10

Estado(G): BA

Código da Carta: A01
Nome da Cidade: Salvador
População: 2.900.319
Área: 692,81 km²
PIB: 64,16 bilhões de reais
Número de Pontos Turísticos: 60

Código da Carta: A02
Nome da Cidade: Feira de Santana
População: 624.107
Área: 1.368,70 km²
PIB: 23,50 bilhões de reais
Número de Pontos Turísticos: 15

Código da Carta: B01
Nome da Cidade: Vitória da Conquista
População: 345.303
Área: 3.705,83 km²
PIB: 14,30 bilhões de reais
Número de Pontos Turísticos: 10

Código da Carta: B02
Nome da Cidade: Ilhéus
População: 164.844
Área: 1.840,92 km²
PIB: 7,05 bilhões de reais
Número de Pontos Turísticos: 20

Estado(H): PE

Código da Carta: A01
Nome da Cidade: Recife
População: 1.653.461
Área: 218,84 km²
PIB: 71,90 bilhões de reais
Número de Pontos Turísticos: 50

Código da Carta: A02
Nome da Cidade: Olinda
População: 393.734
Área: 41,68 km²
PIB: 9,75 bilhões de reais
Número de Pontos Turísticos: 25

Código da Carta: B01
Nome da Cidade: Caruaru
População: 373.025
Área: 921,90 km²
PIB: 11,20 bilhões de reais
Número de Pontos Turísticos: 15

Código da Carta: B02
Nome da Cidade: Petrolina
População: 365.930
Área: 4.756,82 km²
PIB: 10,30 bilhões de reais
Número de Pontos Turísticos: 10
    
     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    #include <stdio.h>
    int main() {

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