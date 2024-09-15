#include <stdio.h>


int main(){
    int notas = 0, media = 0, quantidade = 0, i;
    printf("Digite a quantidade de alunos na sala:\n");
    scanf("%d", &quantidade);

    for (i = 1; i < quantidade; i++)
    {
        printf("Digite a nota do %d aluno:\n", i);
        scanf("%d", &notas);
        media = media + notas;
        
    }
    
    if(media/quantidade >= 6) {
        printf("Sala aprovada");
    } else {
        printf("Sala reprovada");
    }


    return 0;
}
