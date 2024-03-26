#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, v, cont, s = 0;
    printf("Quantos num deseja somar? 4");
    scanf("%i", &n);
    for(cont = 1; cont <= n; cont++){
        printf("Digite o %i valor: ", cont);
        scanf("%i", &v);
        s = s + v;
    }
    printf("Soma = %i", s);
    return(0);
}