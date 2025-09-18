#include <stdio.h>
void recursivatorre(int movidatorre, int torre){ // Declaração da função recursiva da torre
    if (movidatorre <= torre){
        printf("%d: Direita\n", movidatorre);
        movidatorre++;
        recursivatorre(movidatorre,torre); // Chamada da função recursiva7
        }
    }
void recursivarainha(int movidarainha, int rainha){ // Declaração da função recursiva da rainha
    if (movidarainha <= rainha){
        printf("%d: Esquerda\n", movidarainha);
        movidarainha++;
        recursivarainha(movidarainha,rainha); // Chamada da função recursiva
        }
    } 
void recursivabispo(int movidabispo, int bispo){ // Declaração da função recursiva do bispo
    if (movidabispo > bispo){
        return; // Condição de parada da recursão
    } else{
        for (int i = 0; i < 1; i++){ // Loop externo para movimentação para cima
            printf("%d: Cima", movidabispo);
        }
        for (int j = 0; j < 1; j++){ // Loop interno para movimentação para direita
            printf(" Direita\n");
    }
    movidabispo++;
    recursivabispo(movidabispo,bispo); // Chamada da função recursiva
    }
    // Essa função utiliza loops aninhados e recursão para o movimento, essa abordagem é redundante, mas atende ao desafio proposto.
}   // A mesma coisa poderia ser feita com apenas loops aninhados OU apenas recursão, mas não atenderia ao desafio proposto.
// Desafio de Xadrez - MateCheck
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8, cavalo = 3; // Número predeterminado de casas que cada peça pode se mover
    int movidabispo = 1, movidatorre = 1, movidarainha = 1, movidacavalo = 1; // Número de movida das peças
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentos do Bispo: %d\n", bispo); // Numero de casas que o bispo vai se mover

    recursivabispo(movidabispo, bispo); // Chamada da função recursiva
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentos da Torre: %d\n", torre); // Numero de casas que a torre vai se mover
    recursivatorre(movidatorre, torre); // Chamada da função recursiva

    printf("\n"); // Espaço para maior legibilidade
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentos da Rainha: %d\n", rainha); // Numero de casas que a rainha vai se mover
    recursivarainha(movidarainha, rainha); // Chamada da função recursiva

    /* Um switch case poderia ser utilizado para determinar a direção do movimento das peças, mas não foi implementado aqui devido ao escopo do desafio.
     Nível Mestre - Funções Recursivas e Loops Aninhados
     As peças Bispo, Torre e Rainha já utilizam funções recursivas.
     A movimentação do Bispo também utiliza loops aninhados.
     Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
     Inclua o uso de continue e break dentro dos loops */
    printf("\nMovimentos do Cavalo: %d\n", cavalo); // Número de casas que o cavalo vai se mover
    for (int i = 0, j = 0; i <= 2 && j < 1; i++) { // Loop com variáveis e condições múltiplas
            if ( i == 2 )
            {
                printf("%d: Direita\n", movidacavalo);
                j++;
                break; // Sai do loop 
            } else{
            
            printf("%d: Cima\n", movidacavalo);
            movidacavalo++;
            continue; // Pula para a próxima iteração do loop}
            }
    }
    return 0;
}