#include <stdio.h>

int main(){
    float a[5];
    float b[5];

    for( int i = 0; i < 5; i++){
        printf("Digite o %iº valor  do vetor a:", i + 1);
        scanf("%f", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        if(i == 0){
            b[i] = a[i];
        }
        else if(i % 2 == 0){
            b[i] = a[i] * 5;
        }
        else{
            b[i] = a[i] + 5;
        }
    }
    printf("\nVetor a:\n");
    for(int i = 0; i < 5; i++){
        printf("%.2f ", a[i]);
    }
    printf("\nVetor b:\n");
    for(int i = 0; i < 5; i++){
        printf("%.2f ", b[i]);
    }
    printf("\n");
    return(0);

}