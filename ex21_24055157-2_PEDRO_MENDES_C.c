#include <stdio.h>

int main() {
    float capital, tempo, taxa, montante, prestacao;

    printf("Digite o capital:\n");
    scanf("%f", &capital);

    printf("Digite o tempo (numero de parcelas):\n");
    scanf("%f", &tempo);

    printf("Digite a taxa de juros mensal (em porcentagem):\n");
    scanf("%f", &taxa);

    taxa = taxa / 100;

    montante = capital * (1 + taxa * tempo);

    prestacao = montante / tempo;

    printf("O valor da prestacao mensal eh: %.2f\n", prestacao);

    return 0;
}

