#include <stdio.h>

int main() {
    int pessoas, escolha;
    float total;

    printf("Escolha um pacote de viagens.\n");
    printf("PACOTE 1: MALDIVAS POR 8.500 REAIS POR PESSOA\n");
    printf("PACOTE 2: ROMA POR 4.800 REAIS POR PESSOA\n");
    
    scanf("%d", &escolha);
    
    printf("Agora digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    switch (escolha) {
        case 1:
            total = 8500.0 * pessoas; 
            printf("Custo total: %.2f reais\n", total);  
            break;
        case 2:
            total = 4800.0 * pessoas;
            printf("Custo total: %.2f reais\n", total);
            break;
        default:
            printf("Opção inválida.\n");  
            break;
    }

    return 0;
}

