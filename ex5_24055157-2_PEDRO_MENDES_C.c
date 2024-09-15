#include <stdio.h>

int main() {
    int numsecreto = 27;
    int palpite, tentativas = 0;
    int chances = 10;

    printf("Tente adivinhar o numero entre 1 e 100!\n");

    
    while (tentativas < chances) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == numsecreto) {
            printf("Parabens! Voce adivinhou o numero.\n");
            return 0; 
        } else if (palpite < numsecreto) {
            printf("O numero eh maior.\n");
        } else {
            printf("O numero eh menor.\n");
        }

        tentativas++;
    }

    printf("Suas tentativas acabaram! O numero era %d.\n", numsecreto);

    return 0;
}

