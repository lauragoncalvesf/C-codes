#include <stdio.h>

int main(){
    int v1[5], v2[5], fat, i, j;
    for(i = 0; i < 5; i++){
       do{
        printf("Digite o %i valor do v1: ", i + 1);
        scanf("%i", &v1[i]);
       }
       while (v1[i] < 0);
    }
    for(i = 0; i < 5; i++){
        fat = 1;
        for(j = 1; j <= v1[i]; j++){
            fat = fat * j;
        }
        v2[i] = fat;
    }
    printf("\nVetor v1\n");
    for(i = 0; i <= 4; i++){
        printf("%i ", v1[i]);
    }
    printf("\nVetor v2\n");
    for(i = 0; i <= 4; i++){
        printf("%i ", v2[i]);
    }
    return(0);
}

