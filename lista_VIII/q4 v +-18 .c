#include <stdio.h>

void verifica(int p);

int main(){
    int a;
    printf("Digite a idade:");
    scanf("%i", &a);
    verifica(a);
    return(0);
}

void verifica(int p){
    if(p > 18){
        printf("É maior de idade!");
    }
    else{
        printf("É menor de idade!");
    }
}