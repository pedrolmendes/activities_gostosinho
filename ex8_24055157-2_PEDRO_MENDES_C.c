#include <stdio.h>

int main(){
	float distancia, consumo, valor_gasolina, valor_total;
	
	printf("Digite a distancia (em km): ");
	scanf("%f", &distancia);
	
	printf("Digite o consumo medio de combustivel (em km por litro): ");
	scanf("%f", &consumo);
	
	printf("Digite o valor da gasolina: ");
	scanf("%f", &valor_gasolina);
	
	valor_total = (distancia * consumo) * valor_gasolina;
	
	printf("O custo total da viagem é: R$%2.f\n", valor_total);
	
	
	
	return 0;
}
