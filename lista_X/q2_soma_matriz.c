#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int l, c, x = 1, a[2][3], b[2][3];
    printf("Preenchimento da matriz a \n");

    for(l = 0; l < 2; l++){ // MATRIZ A 
        for(c = 0; c < 3; c++){
            printf("Digite o %iº valor inteiro para a: ", x++);
            scanf("%i", &a[l][c]);
        }
    }
    printf("\nPreenchimento da matriz b \n");
    x = 1;
    for(l = 0; l < 2; l++){ // MATRIZ B
        for(c = 0; c < 3; c++){
            printf("Digite o %iº valor inteiro para b: ", x++);
            scanf("%i", &b[l][c]);
        }
    }
    printf("\nMatriz a:\n");
    for(l = 0; l < 2; l++){ // CORRIMENTO DA MATRIZ A; (não precisa percorrer as duas matrizes 
        for(c = 0; c < 3; c++){
            printf("%i ", a[l][c]);
        }
        printf("\n");
    }
    printf("\nMatriz b:\n");
    for(l = 0; l < 2; l++){ // CORRIMENTO DA MATRIZ B; (nao precisava
        for(c = 0; c < 3; c++){
            printf("%i ", b[l][c]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Soma de a e b: \n");
    for(l = 0; l < 2; l++){
        for(c = 0; c < 3; c++){
            printf("%i ", a[l][c] + b[l][c]);
        }
        printf("\n");
    }
    return(0);
    }