#include <stdio.h>
#include <math.h>

int main() {
    double tempo, capital, taxa, total;

    printf("Digite o capital aplicado, o tempo (em per�odos) e a taxa de juros: ");
    scanf("%lf %lf %lf", &capital, &tempo, &taxa);

    total = capital * pow((1 + taxa / 100), tempo);

    printf("O montante �: %.2lf\n", total);

    return 0;
}

