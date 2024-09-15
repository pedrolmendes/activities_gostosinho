#include <stdio.h>

int main(){
	
    int codigo, temp, digits = 0;

    printf("Digite um codigo de 8 digitos que deve ser divisivel por 6: ");
    scanf("%d", &codigo);

    temp = codigo;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    
    if (digits != 8) {
        printf("CODIGO INVALIDO: deve conter exatamente 8 digitos.\n");
        return 1;
    }

   
    if (codigo % 6 == 0) {
        printf("CODIGO VALIDO\n");
    } else {
        printf("CODIGO INVALIDO: nao eh divisivel por 6.\n");
    }

    return 0;
}

