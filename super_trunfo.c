

#include <stdio.h>

int main (){
    char estado[1];
    char codigo_carta[3];
    char nome_cidade[15] = "Rio";
    int populacao;
    float area;
    float pib;
    int ponto_turistico[2]; 

    printf("Estado: \n");
    scanf("%c", &estado);  
    
    printf("Código da carta: \n");
    scanf("%s", &codigo_carta);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: km²\n");
    scanf("%f", &area);

    printf("PIB: bilhões de reais\n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico);

    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico);

    return 0;

}