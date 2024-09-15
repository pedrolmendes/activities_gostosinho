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

	// Equil�tero: Todos os tr�s lados t�m o mesmo comprimento.
    // Is�sceles: Dois lados t�m o mesmo comprimento, e o terceiro � diferente.
    // Escaleno: Todos os tr�s lados t�m comprimentos diferentes.
