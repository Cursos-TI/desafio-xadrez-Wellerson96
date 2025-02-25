#include <stdio.h>

void bispo(int num){
    if(num <= 4){
        printf("cima, direita.\n");

        bispo(num + 1);
    }
}

void torre(int num2){
    if(num2 <= 4){
        printf("direita.\n");

        torre(num2 + 1);
    }
}

void rainha(int num3){
    if(num3 <= 7){
        printf("esquerda.\n");

        rainha(num3 + 1);
    }
}


int main() {

    printf("Bispo se movimenta para:\n");
  
    int movimento = 0;

    bispo(movimento);

    printf("\n");

    printf("Torre se movimenta para:\n");

    int movimento2 = 0;
  
    torre(movimento2);

    printf("\n");

    printf("Rainha se movimenta para:\n");
  
    int movimento3 = 0;

    rainha(movimento3);

    printf("\n");

    printf("Cavalo se movimenta para:\n");
        for(int cavalo = 0; cavalo <= 3; cavalo ++){
            if(cavalo == 2) continue;
            if(cavalo == 3) break;

            printf("cima.\n");
        }

        printf("direita\n");

    return 0;
}
