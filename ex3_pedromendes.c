#include <stdio.h>

int main (){
	
	float salario, bonus, sfinal;
	char nota;
	
	printf("Digite o seu salario: ");
	scanf("%f",&salario);	
	
	printf("Insira a sua avaliacao (a, b ou c): ");
	scanf(" %c", &nota);
	
	if (nota == 'a'){
		printf("O valor total do seu salario eh de:R$%.2f ", salario + (salario * 15) / 100);
	} else if (nota == 'b'){
		printf("O valor total do seu salario eh de: R$%.2f ", salario + (salario * 10) / 100);
	} else if (nota == 'c'){
		printf("O valor total do seu salario eh de: R$%2.f ", salario + (salario * 5) / 100);
	}
	
	
	
	
	
	return 0;
}
