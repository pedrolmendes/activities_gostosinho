#include <stdio.h>

int main(){
	
	float vproduto1 = 10.0; //valores dos produtos em REAIS
	float vproduto2 = 20.0;
	float vproduto3 = 50.0;
	
	int quantidade1, quantidade2, quantidade3; //quantidade dos produtos
	
	float desconto1 = 0.05; //comprou mais de 10 é 5% de desconto
	float desconto2 = 0.10; //comprou mais de 5 é 10% de desconto
	float desconto3 = 0.40; //comprou mais de 3 é 40% de desconto
	
	printf("Digite a quantidade do pruduto 1: ");
	scanf("%d", &quantidade1);
	
	printf("Digite a quantidade do pruduto 2: ");
	scanf("%d", &quantidade2);
	
	printf("Digite a quantidade do pruduto 3: ");
	scanf("%d", &quantidade3);
	
	float vtotal1 = quantidade1 * vproduto1;
	float vtotal2 = quantidade2 * vproduto2;
	float vtotal3 = quantidade3 * vproduto3;
	
	if (quantidade1 > 10){
		vtotal1 -= vtotal1 * desconto1;
	}
	
	if (quantidade2 > 5){
		vtotal2 -= vtotal2 * desconto2;
	}
	
	if (quantidade3 > 3){
		vtotal3 -= vtotal3 * desconto3;
	}
	
	float valorTotal = vtotal1 + vtotal2 + vtotal3;
	
	printf("O valor total de sua compra: R$%2.f\n ", valorTotal);
	
	
	return 0;
}
