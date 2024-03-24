#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, v, cont = 1, s = 0;
    printf("Quantos num deseja somar?");
    scanf("%i", &n);
    while(cont <= n ){
        printf("Digite o %i valor:", cont);
        scanf("%i", &v);
        s = s + v;
        cont ++;
    }
    printf("Soma = %i", s);
    return(0);
    }
    
