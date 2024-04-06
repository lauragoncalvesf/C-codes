#include <stdio.h>
#include <locale.h>

int main(){
    float a[4][2], b[4][2];
    int l, c, x = 1;

    for(l = 0; l < 4; l++){ //PREENCHIMENTO DA MATRIZ A 
        for(c = 0; c < 2; c++){
            printf("Digite o %iº valor int da matriz A: ", x++);
            scanf("%f", &a[l][c]);
        }
    }
    for(l = 0; l < 4; l++){ //PREENCHIMENTO DA MATRIZ B
        for(c = 0; c < 2; c++){
            b[3 - l][1 - c] = a[l][c];
        }
    }
    printf("\n=> Matriz A:\n"); //EXIBIÇÃO DE A
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            printf("%.0f ", a[l][c]);
        }
        printf("\n");
    }
    printf("\n=> Matriz B:\n"); //EXIBIÇÃO DE B
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            printf("%.0f ", b[l][c]);
        }
        printf("\n");
    }
    return(0);
}