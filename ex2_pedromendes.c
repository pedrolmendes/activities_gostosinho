#include <stdio.h>

int main (){
	int valor, notas100, notas50, notas20, notas10, notas5, restante;
	
	printf("Informe o valor que deseja sacar: ");
	scanf("%d", &valor);
	
	notas100 = valor / 100;
	restante = valor % 100;
	
	notas50 = restante / 50;
	restante = restante % 50;
	
	notas20 = restante / 20;
	restante = restante % 20;
	
	notas10 = restante / 10;
	restante = restante % 10;
	
	notas5 = restante / 5;
	restante = restante % 5;
	
	printf("Distribuicao das notas:\n");
	printf("Notas de R$100: %d\n", notas100);
	printf("Notas de R$50: %d\n", notas50);
	printf("Notas de R$20: %d\n", notas20);
	printf("Notas de R$10: %d\n", notas10);
	printf("Notas de R$5: %d\n", notas5);
	
	if (restante > 0){
		printf("O valor restante que nao pode ser sacado: R$%d\n", restante);
		}
	
	
	
	
	
	return 0;
}
