#include <stdio.h>

int main(){
	char usuario1[50];
	char usuario2[50];
	
	int senha1, senha2;
	
	printf("cadastro: Digite seu usuario: ");
	scanf("%s", &usuario1);
	
	printf("Insira a senha (apenas numeros): ");
	scanf("%d", &senha1);
	
	printf("login: Digite seu usuario: ");
	scanf("%s", &usuario2);
	
	 if (strcmp(usuario1, usuario2) != 0) {
        printf("Acesso negado.\n");
        return 0;
    }
	
	printf("Insira a senha (apenas numeros): ");
	scanf("%d", &senha2);
	
	if (senha1 == senha2){
		printf("Acesso liberado");
	} else {
		printf("Acesso negado.\n");
	}
	
	
	return 0;
}
