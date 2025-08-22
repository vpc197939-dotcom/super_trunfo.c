#include <stdio.h>

int main() {
    
    //Cadastro dos dados das cartas do Super Trunfo

    //Variáveis que serão trabalhadas no jogo

    char estado1[20], estado2[20];
    char codigo1[50], cidade1[50], codigo2[50], cidade2[50];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;

    //Coletando os dados da carta 1

    printf("Escolha um estado para representar a carta 1:  \n");
    scanf("%s", &estado1); //Escolha do estado da primeira carta 

    printf("Digite o código da carta 1:  \n");
    scanf("%s", &codigo1); //Código da carta= inicial do estado + posição em que ela foi escolhida ex: b01

    printf("Escolha uma cidade para carta 1:  \n");
    scanf("%s", &cidade1); //Cidade refrente ao estado escolhido

    printf("A população dessa cidade é:  \n");
    scanf("%d", &populacao1); 

    printf("A quantidade de pontos turísticos dessa cidade é:  \n");
    scanf("%d", &pontosturisticos1);

    //A área e o pib devem ser decimais aproximados

    printf("Digite a área da cidade em quilômetros quadrados:  \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade escolhida:  \n");
    scanf("%f", &pib1);

    //Coletando os dados da carta 2

    printf("\n"); //Linha pulada para representar que uma nova carta será apresentada

    printf("Escolha um estado para representar a carta 2:  \n");
    scanf("%s", &estado2); //Escolha do estado da segunda carta 

    printf("Digite o código da carta 2:  \n");
    scanf("%s", &codigo2); //Código da carta= inicial do estado + posição em que ela foi escolhida ex: f02
    
    printf("Escolha uma cidade para carta 2:  \n");
    scanf("%s", &cidade2); //Cidade refrente ao estado escolhido

    printf("A população dessa cidade é:  \n");
    scanf("%d", &populacao2); 

    printf("A quantidade de pontos turísticos dessa cidade é:  \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a área da cidade em quilômetros quadrados:  \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade escolhida:  \n");
    scanf("%f", &pib2);

    //Apresentação dos dados coletados das cartas

    printf("\n");

    //Dados coletados da carta 1

    printf("O estado escolhido pela carta 1 é o: %s\n", estado1);//Estado da carta 1

    printf("O código da carta 1 é: %s\n", codigo1);//Código da carta 1

    printf("A cidade escolhida na carta 1 é: %s \n", cidade1);
    // Cidade escolhida na carta 1

    printf("A populão da carta 1 possui : %d habitantes\n", populacao1);//Populção da carta 1

    printf("A quantidade de pontos turísticos da carta 1 é: %d \n", pontosturisticos1);
    // Quantidade de pontos turísticos da carta 1

    printf("A área da carta 1 é: %.2f\n", area1);//Área em quilômetros quadrados

    printf("O PIB da carta 1 é: %.2f\n", pib1);//PIB da cidade

    printf("\n");

    //Dados coletados carta 2

    printf("O estado escolhido pela carta 2 é o: %s\n", estado2);//Estado da carta 2

    printf("O código da carta 2 é: %s\n", codigo2);//Código da carta 2

    printf("A cidade escolhida na carta 2 é: %s \n", cidade2);
    // Cidade escolhida na carta 2

    printf("A populão da carta 2 possui : %d habitantes\n", populacao2);//Populção da carta 2

    printf("A quantidade de pontos turísticos da carta 2 é: %d \n", pontosturisticos2);
    // Quantidade de pontos turísticos da carta 2

    printf("A área da carta 2 é: %.2f\n", area2);//Área em quilômetros quadrados

    printf("O PIB da carta 2 é: %.2f", pib2);//PIB da cidade



    return 0;
}