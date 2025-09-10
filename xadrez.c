#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8; // Número predeterminado para cada peça
    int movidabispo = 1, movidatorre = 1, movidarainha = 1; // Número de movida das peças
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentos do Bispo: %d\n", bispo);
    for (movidabispo; movidabispo <= bispo; movidabispo++)  // Aumento na variável até chegar ao numero desejado
{
    printf("%d: Cima Direita\n",movidabispo);
}
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentos da Torre: %d\n", torre);
    do
    {
        printf("%d: Direita\n", movidatorre);
        movidatorre++; // Aumento na variável até chegar ao numero desejado
    } while (movidatorre <= torre);
    printf("\n"); // Espaço para maior legibilidade
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentos da Rainha: %d\n", rainha);
    while (movidarainha <= rainha)
    {
        printf("%d: Esquerda\n", movidarainha);
        movidarainha++; // Aumento na variável até chegar ao numero desejado
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
