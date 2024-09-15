#include <stdio.h>


int main(){
    float base, kmAdicional, km, total;

    printf("Digite quantos km voce rodou\n");
    scanf("%f", &km);
    printf("Digite a taxa base\n");
    scanf("%f", &base);
    printf("Digite a taxa adicional por km\n");
    scanf("%f", &kmAdicional);

    total = base + (km * kmAdicional);
    printf("%.2f eh o preco total", total);


    return 0;
}
