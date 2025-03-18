#include <stdio.h>

int main() {

    // Variáveis para armazenar os dados da carta
    int pop, pts_Turisticos;
    float area, pib;
    char cidade[50], estado[50], cod_card[4];

    
    // Coletando dados do usuário
    printf("Crie uma carta\n\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pts_Turisticos);

    printf("Digite a população: ");
    scanf("%d", &pop);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    // Exibindo os dados formatados
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Código da carta: %s\n", cod_card);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Pontos Turísticos: %d\n", pts_Turisticos);
    printf("População: %d\n", pop);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    

    return 0;
}