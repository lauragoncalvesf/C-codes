#include <stdio.h>

int main(){
    float num;
    printf("Digite um numero: \n");
    scanf("%f", &num);
    if(num > 0){
        printf("O numero e positivo!");
    } else if (num < 0)
    {
        printf("O numero e negativo!");
    } else {
        printf("O numero e neutro!");
    }
    return(0);
}