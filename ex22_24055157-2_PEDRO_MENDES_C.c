#include <stdio.h>

int main() {
    float temperatura1, temperatura2;
    int opcao;

    // Solicita ao usuário a opção de conversão
    printf("Digite 1 para converter de Celsius para Fahrenheit ou 2 para converter de Fahrenheit para Celsius: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura1);
            temperatura2 = (temperatura1 * 1.8) + 32;
            printf("Temperatura em Fahrenheit: %.2f\n", temperatura2);
            break;
        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura1);
            temperatura2 = (temperatura1 - 32) / 1.8;
            printf("Temperatura em Celsius: %.2f\n", temperatura2);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}

