#include <stdio.h> // Biblioteca padrão para entrada e saída de dados, como o printf.

/*
 * Descrição: Este programa simula o movimento de peças de xadrez
 * (Torre, Bispo, Rainha e Cavalo) utilizando funções recursivas
 */

void moverTorreRecursivo(int passo_atual, int total_passos) {
    // Caso base: Se já realizamos todos os passos, a função para.
    if (passo_atual > total_passos) {
        return; // Encerra a recursão para esta chamada.
    }

    // Ação: Imprime o movimento do passo atual.
    printf("Passo %d: Direita\n", passo_atual);

    // Chamada recursiva: Chama a si mesma para o próximo passo.
    moverTorreRecursivo(passo_atual + 1, total_passos);
}

void moverBispoRecursivo(int passo_atual, int total_passos) {
    // Caso base: Se já realizamos todos os passos, a função para.
    if (passo_atual > total_passos) {
        return;
    }

    // Ação: Imprime o movimento diagonal do passo atual.
    printf("Passo %d: Cima, Direita\n", passo_atual);

    // Chamada recursiva: Chama a si mesma para o próximo passo.
    moverBispoRecursivo(passo_atual + 1, total_passos);
}

void moverRainhaRecursivo(int passo_atual, int total_passos) {
    // Caso base: Se já realizamos todos os passos, a função para.
    if (passo_atual > total_passos) {
        return;
    }

    // Ação: Imprime o movimento do passo atual.
    printf("Passo %d: Esquerda\n", passo_atual);

    // Chamada recursiva: Chama a si mesma para o próximo passo.
    moverRainhaRecursivo(passo_atual + 1, total_passos);
}


int main() {

  
    /* 1. Movimento da Torre (usando função recursiva) */
    printf("--- [jogador] Movimento da Torre (5 casas para a Direita) ---\n"); // A Torre se moverá 5 casas para a direita.
    const int casas_torre_jogador = 5; // Define o número de casas.
    moverTorreRecursivo(1, casas_torre_jogador); // Chama a função recursiva iniciando no passo 1.
    printf("\n"); // Adiciona uma linha em branco para melhor organização da saída.


    /* 2. Movimento do Bispo (usando função recursiva e loops aninhados na lógica interna) */
        printf("--- [jogador] Movimento do Bispo (5 casas na Diagonal Cima-Direita) ---\n"); // O Bispo se moverá 5 casas na diagonal para cima e à direita.
    const int casas_bispo_jogador = 5;
    moverBispoRecursivo(1, casas_bispo_jogador); // Chama a função recursiva.
    printf("\n"); // Linha em branco para separar.


    /* 3. Movimento da Rainha (usando função recursiva) */
    printf("--- [jogador] Movimento da Rainha (8 casas para a Esquerda) ---\n"); // A Rainha se moverá 8 casas para a esquerda.
    const int casas_rainha_jogador = 8;
    moverRainhaRecursivo(1, casas_rainha_jogador); // Chama a função recursiva.
    printf("\n");


    /* 4. Movimento do Cavalo (usando loop com múltiplas variáveis/condições e break) */
    printf("--- [jogador] Movimento do Cavalo (1 vez em L para Cima à Direita) ---\n"); // O Cavalo fará 1 movimento em L: 2 casas para cima, 1 para a direita.

    int passo_v = 0; // Contador de passos verticais (para cima) v= vertical
    int passo_h = 0; // Contador de passos horizontais (para direita) h = Horizontal

    // O loop continua enquanto não tivermos completado 2 passos verticais OU 1 passo horizontal.
    for (int i = 0; passo_v < 2 || passo_h < 1; i++) {

        // Condição para mover para cima (prioritário)
        if (passo_v < 2) {
            printf("Passo Vertical %d: Cima\n", passo_v + 1);
            passo_v++; // Incrementa o contador vertical
        }
        // Condição para mover para a direita (após os verticais)
        else if (passo_h < 1) {
             printf("Passo Horizontal %d: Direita\n", passo_h + 1);
             passo_h++; // Incrementa o contador horizontal
        }

        // Condição de parada com break: Se completamos 2 passos V e 1 passo H, o movimento L terminou.
        if (passo_v == 2 && passo_h == 1) {
            printf("Movimento em L concluído.\n");
            break; // Sai do loop 'for' imediatamente.
        }
    }
    printf("\n");

    return 0; // Indica que o programa terminou com sucesso.
}
