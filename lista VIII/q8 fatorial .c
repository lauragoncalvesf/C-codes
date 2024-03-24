#include <stdio.h>
#include <locale.h>

int fatorial(int p);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    printf("%i! = %i\n", n, fatorial(n));
    return(0);
}

int fatorial(int p){
    int i, fatorial = 1; //pq nao posso mudar p fat??
    for(i = 1; i <= p; i++){
        fatorial = fatorial * i;
    }
    return(fatorial); 
}