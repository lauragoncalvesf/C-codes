#include <stdio.h>
#include <locale.h>

int main(){
    int l = 0, c = 0, i, j, x = 1, a[l][c], b[l][c];
    //solicita e armazena o l e c da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%i", &l);
    printf("Digite o número de colunas da matriz: ");
    scanf("%i", &c);

    //PREENCHIMENTO DA MATRIZ A
    
    printf("Digite os valores da matriz a:\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%iº ", x++);
            scanf("%i", &a[i][j]);
        }
    }
    //PREENCHIMENTO DA MATRIZ B
     
    printf("\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            b[i][j] = a[i][j] * 3;
        }
    }
    //EXIBE MATRIZ A 
    printf("=> Matriz A:\n"); 
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
    //EXIBE MATRIZ B
    printf("\n\n=> Matriz B (A*3):\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%i ", b[i][j]);
        }
        printf("\n");
    }
    return(0);
}