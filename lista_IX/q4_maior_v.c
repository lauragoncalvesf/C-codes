#include <stdio.h>

int main(){
    int a[10], i, maior = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", & a[i]);
    }
    for(i = 0; i < 10; i++){
        if(a[i] > maior){
            maior = a[i];
        }
    }
    printf("O maior valor encontrado é: %i", maior);
    return(0);
}