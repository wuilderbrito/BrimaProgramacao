#include <stdio.h>

// Definimos uma estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4]; // Código da cidade (Ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    // Declaramos duas variáveis do tipo Cidade
    Cidade cidade1 = {"J01", 14000000, 2194.0, 1650.0, 20}; // Dados de Tóquio
    Cidade cidade2;

    // Registro da segunda cidade
    printf("\nDigite o código da segunda cidade (Ex: B02): ");
    scanf("%s", cidade2.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB (em milhões USD): ");
    scanf("%f", &cidade2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

    // Mostrar os dados registrados
    printf("\n-----------------------------\n");
    printf("Dados da primeira cidade (Tóquio):\n");
    printf("Código: %s\n", cidade1.codigo);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f milhões USD\n", cidade1.pib);
    printf("Pontos turísticos: %d\n", cidade1.pontos_turisticos);
    
    printf("\nDados da segunda cidade:\n");
    printf("Código: %s\n", cidade2.codigo);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f milhões USD\n", cidade2.pib);
    printf("Pontos turísticos: %d\n", cidade2.pontos_turisticos);

    return 0;
}
