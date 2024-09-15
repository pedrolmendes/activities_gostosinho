#include <stdio.h>
 
 int main () {

    char senha[100];
    char senha2[100];

    printf("Digite uma senha que tenha no minimo 8 caracteres, conter 1 maiuscula, 1 minuscula, 1 numero e 1 caracter especial.:\n");
    scanf("%s", senha);

    printf("LOGIN: Digite sua senha novamente:");
    scanf("%s", senha2);

    if(senha == senha2)
    {
        printf("Acesso permitido");
    }else{
        printf("Acesso negado");
    }


    return 0;
 }
