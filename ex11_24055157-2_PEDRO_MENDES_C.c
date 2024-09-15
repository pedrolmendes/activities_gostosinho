#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Digite os 3 lados do seu triangulo: \n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado1 == lado3) {
        printf("Triangulo equilatero\n");
    }
    else if ((lado1 == lado2 && lado1 != lado3) || 
             (lado2 == lado3 && lado2 != lado1) || 
             (lado3 == lado1 && lado3 != lado2)) {
        printf("Triangulo isoceles\n");
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
        printf("Triangulo escaleno\n");
    }

    return 0;
}

	// Equilátero: Todos os três lados têm o mesmo comprimento.
    // Isósceles: Dois lados têm o mesmo comprimento, e o terceiro é diferente.
    // Escaleno: Todos os três lados têm comprimentos diferentes.
