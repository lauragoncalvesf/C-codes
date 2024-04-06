#include <stdio.h>
#include <locale.h>

int main(){
    int l, c, x = 1;
    char nome[5][50];
    float nota[5][3], media[5], m = 0;
    for(l = 0; l < 5; l++){
        printf("Digite o nome do %iº aluno: ", x++);
        gets(nome[l]);
    }
    printf("\n=========================\n");
    for(l = 0; l < 5; l++){
        printf("Digite as três notas de %s\n", nome[l]);
        m = 0;
        for (c = 0; c < 3; c++){
            printf("%iª: ", c + 1);
            scanf("%f", &nota[l][c]);
            m = m + nota[l][c];
        }
        media[l] = m / 3;
        printf("\n");
    }
    printf("==>Lista de alunos e médias<==\n");
    for(l = 0; l < 5; l++){
        printf("%iª: %s, você obteve média %.1f\n", l + 1, nome[l], media[l]);
    }
    return(0);
}