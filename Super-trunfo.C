#include <stdio.h>

// Define como deve ser a estrutura da carta
typedef struct {
    char cod_card[4];
    char estado[50];
    char cidade[50];
    int pts_Turisticos;
    int pop;
    float area;
    float pib;
} Carta;

// Função para criar uma carta
void criar_Carta(Carta *carta) {
    printf("\nCrie uma carta\n\n");

    printf("Digite o código da carta (3 dígitos): ");
    scanf(" %3s", carta->cod_card);

    printf("Digite o estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", carta->cidade);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta->pts_Turisticos);

    printf("Digite a população: ");
    scanf("%d", &carta->pop);

    printf("Digite a área: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("\nCarta criada com sucesso!\n");
}

// Função para exibir os dados de uma carta
void exibir_Carta(const Carta *carta, int numero) {
    printf("\n--- Dados da Carta %d ---\n", numero);
    printf("| Código da carta: %s\n", carta->cod_card);
    printf("| Estado: %s\n", carta->estado);
    printf("| Cidade: %s\n", carta->cidade);
    printf("| Pontos Turísticos: %d\n", carta->pts_Turisticos);
    printf("| População: %d\n", carta->pop);
    printf("| Área: %.2f km²\n", carta->area);
    printf("| PIB: %.2f\n", carta->pib);
    printf("-------------------------\n");
}

int main() {
    // Criar variáveis para armazenar até 3 cartas
    Carta carta1, carta2, carta3;

    // Criar as cartas
    criar_Carta(&carta1);
    criar_Carta(&carta2);
    criar_Carta(&carta3);

    // Exibir as cartas criadas
    exibir_Carta(&carta1, 1);
    exibir_Carta(&carta2, 2);
    exibir_Carta(&carta3, 3);

    return 0;
}