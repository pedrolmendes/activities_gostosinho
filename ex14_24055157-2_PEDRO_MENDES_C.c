#include <stdio.h>

int main() {
    char categoria, resp;
    float valor, total = 0.0f;

    do {
        printf("Digite a categoria do seu livro (A/B/C):\n");
        scanf(" %c", &categoria); 


        printf("Digite o valor do seu livro:");
        scanf("%f", &valor);

        if (categoria == 'A') {
            valor -= valor * 10 / 100;
            
        } else if (categoria == 'B') {
            valor -= valor * 20 / 100;
            
        } else if (categoria == 'C') {
            valor -= valor * 30 / 100;
        }

        total = total + valor;

        printf("Deseja adicionar mais livros? (Utilize S ou N): ");
        scanf(" %c", &resp); 
    } while (resp == 'S' || resp == 's');

    printf("Total: %.2f\n", total);

    return 0;
}
