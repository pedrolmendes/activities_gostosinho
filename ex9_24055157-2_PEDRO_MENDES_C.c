#include <stdio.h>

int main() {
    int numero, i;
	int primo = 1; 

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    } else {
        for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
        primo = 0; 
        break; }
        }
    }

    if (primo) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
