#include <stdio.h>

int main (){
	
	float valor;
	
	printf("Digite o valor da compra: ");
	scanf("%f",&valor);	
	
	if (valor <= 100){
		printf("O valor seu sem o desconto eh de:R$%.2f ", valor);
	} else if (valor >= 100 && valor <=500){
		printf("O valor com desconto de 10 porcento eh de: R$%.2f ",valor - (valor * 10) / 100);
	} else {
		printf("O valor com desconto de 20 porcento eh de: R$%2.f ", valor - (valor * 20) / 100);
	}
	
	
	
	
	
	
	return 0;
}
