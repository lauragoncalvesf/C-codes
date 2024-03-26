#include <stdio.h>

int main(){
    int i, a[5], soma = 0;
    for(i = 0; i < 5; i++){
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", & a[i]);
    }
    for(i = 0; i < 5; i++){
        soma = soma + a[i];
    }
    printf("A soma dos números é: %i", soma);
    return(0);
}