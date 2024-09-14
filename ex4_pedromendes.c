#include <stdio.h>

	int quadperfeito(int num);

int main (){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (quadperfeito(numero)){
		printf("%d eh um quadrado PERFEITO.", numero);
	} else {
		printf("%d nao eh um quadrado PERFEITO.", numero);
	}
	
	return 0;
}
	int quadperfeito (int num){
		int i = 1;
		
		while ( i * i <= num){
			if(i * i == num){
				return 1;
			}
			i++;
		}
		return 0;
	}
