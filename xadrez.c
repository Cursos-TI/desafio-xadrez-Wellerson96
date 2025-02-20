#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  
    //Utilização do "while" para mover o bispo.
    int bispo = 1;

    printf("Bispo se movimenta para:\n");
    
    while(bispo <= 5){
        bispo ++;
        printf("cima, direita.\n");
    }

    //Utilização do "do-while" para mover a torre.
    int torre = 1;

    printf("Torre se movimenta para:\n");

    do{
        printf("direita.\n");
        torre ++;
    }while(torre <= 5);

    // Utilização do "for" para mover a rainha.
    int rainha;

    printf("Rainha se movimenta para:\n");

    for(rainha = 1; rainha <= 5; rainha ++){
        printf("esquerda.\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Utilização do loop aninhado "for" para mover o cavalo.
    int cavalo;
    int cavalo2;

    printf("Cavalo se movimenta para:\n");

    for(cavalo = 1; cavalo <= 1; cavalo++){
        for(cavalo2 = 1; cavalo2 <=2; cavalo2++){
            printf("baixo.\n");
        }

printf("esquerda.\n");

    }

    // Utilização do loop aninhado "while" para mover o cavalo.
    int cavalo3 = 1;
    int cavalo4 = 1;

    printf("Cavalo se movimenta para:\n");

    while(cavalo3 <= 1){
        cavalo3 ++;
        while(cavalo4 <= 2){

            printf("baixo.\n");

            cavalo4 ++;
        }

        printf("esquerda.\n");

    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
