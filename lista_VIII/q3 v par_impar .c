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
    if(p % 2 ==0){
        printf("O número é par!");
    }
    else{
        printf("O número é ímpar");
    }
}