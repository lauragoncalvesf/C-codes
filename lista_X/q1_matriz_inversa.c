#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int l, c, x = 1, m[3][3];
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("Digite %iº valor inteiro: ", x++);
            scanf("%i", &m[l][c]);
        }
    }
    printf("Matriz inversa \n");
    for(l = 2; l >= 0; l--){
        for(c = 2; c >= 0; c--){
            printf("%i  ", m[l][c]);
        }
        printf("\n");
    }
    return(0);
}