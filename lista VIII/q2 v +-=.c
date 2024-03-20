#include <stdio.h>

void verifica(int p);

int main(){
    int a;
    printf("Digite um valor:");
    scanf("%i", &a);
    verifica(a);
    return(0);
}

void verifica(int p){
    if(p > 0){
        printf("O valor é positivo!");
    }
    else if(p < 0){
        printf("O valor é negativo!");
    } else{
        printf("O valor é neutro!");
    }
}