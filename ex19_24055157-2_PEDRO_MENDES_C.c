#include <stdio.h>


int main(){
	
    float temperatura, humidade, total;

    printf("Digite a temperatura e a humidade do ar em porcentagem\n");
    scanf("%f %f", &temperatura, &humidade);
        
    total = temperatura + 0.55 * (humidade - 50);

    printf("O valor da sensacao termica eh de %.2f graus celcus", total);

    return 0;
}
