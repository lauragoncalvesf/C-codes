#include <stdio.h>
#include <math.h>

int main(){
    int q;
    float v;
    printf("Digite a quantidade de macas desejada:");
    scanf("%i", &q);
    if(q < 12){
        v = q * 1.30;
    }
    else{
        v = q * 1.10;
    }
    printf("O valor a ser pago e: %.2f", v);
    return(0);
}