#include <stdio.h> // Inclui a biblioteca para funções de entrada e saída, como printf e scanf

int main() {
    // === 1. DEFINIÇÃO DAS VARIÁVEIS ===
    // Vamos criar variáveis para guardar os dados de DOIS países.

    // Variáveis para a Carta 1
    char nomePais1[50];
    int populacao1;
    float area1;

    // Variáveis para a Carta 2
    char nomePais2[50];
    int populacao2;
    float area2;

    // === 2. CADASTRO DAS CARTAS ===
    // Pedimos ao usuário para digitar os dados de cada país.

    // -- Cadastro da Carta 1 --
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do pais (sem espacos): ");
    scanf("%s", nomePais1); // Lê o nome do país 1

    printf("Digite a populacao: ");
    scanf("%d", &populacao1); // Lê a população (um número inteiro)

    printf("Digite a area em km2: ");
    scanf("%f", &area1); // Lê a área (pode ser um número com vírgula)
    printf("\n"); // Pula uma linha para organizar

    // -- Cadastro da Carta 2 --
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do outro pais (sem espacos): ");
    scanf("%s", nomePais2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("\n");


    // === 3. COMPARAÇÃO DAS CARTAS ===
    // Agora, vamos comparar os atributos e ver quem ganha em cada um.

    printf("--- RESULTADO DA BATALHA ---\n\n");

    // -- Comparando a POPULAÇÃO --
    printf("--- Comparando Populacao ---\n");
    // Se a população do país 1 for maior que a do país 2...
    if (populacao1 > populacao2) {
        printf("Vencedor: %s, com %d habitantes!\n", nomePais1, populacao1);
    }
    // Senão, se a população do país 2 for maior...
    else if (populacao2 > populacao1) {
        printf("Vencedor: %s, com %d habitantes!\n", nomePais2, populacao2);
    }
    // Senão (se nenhuma das condições acima for verdade, significa que são iguais)
    else {
        printf("Houve um empate na populacao com %d habitantes!\n", populacao1);
    }

    printf("\n"); // Pula uma linha

    // -- Comparando a ÁREA --
    printf("--- Comparando Area ---\n");
    // Se a área do país 1 for maior que a do país 2...
    if (area1 > area2) {
        printf("Vencedor: %s, com %.2f km2!\n", nomePais1, area1);
    }
    // Senão, se a área do país 2 for maior...
    else if (area2 > area1) {
        printf("Vencedor: %s, com %.2f km2!\n", nomePais2, area2);
    }
    // Senão, deu empate.
    else {
        printf("Houve um empate na area com %.2f km2!\n", area1);
    }

    printf("\nBatalha finalizada!\n");

    return 0; // Indica que o programa terminou com sucesso
}
