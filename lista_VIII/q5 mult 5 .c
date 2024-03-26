#include <stdio.h>

void mult(int p);

int main(){
    int a;
    printf("Digite um valor:");
    scanf("%i", &a);
    mult(a);
    return(0);
}

void mult(int p){
    if(p % 5 == 0){
        printf("O valor %i é múltiplo de 5", p);
    }
    else{
        printf("O valor %i não é múltiplo de 5", p);
    }
}