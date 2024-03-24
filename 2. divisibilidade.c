#include <stdio.h>

int main(){
    int n, d;
    printf("Digite o numerador:");
    scanf("%i", &n);
    printf("Digite o denominador:");
    scanf("%i", &d);
    if (d == 0){
        printf("A operacao e indefinida!");
    } else if(n % d ==0){
        printf("A operacao e divisivel!");
    }else{
        printf("A operacao nao e divisivel!");
    }
return(0);
}