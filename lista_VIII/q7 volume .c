#include <stdio.h>
#include <locale.h>

float volume(float c, float l, float a);

int main(){
    setlocale(LC_ALL, "Portuguese");
    float c, l, a, vol;
    printf("Digite o comprimento, largura e a altura, respectivamente:\n");
    scanf("%f %f %f", &c, &l, &a);
    vol = volume(c, l, a);
    printf("O volume da caixa retangular é %.1f ml", vol);
    return(0);
}

float volume(float c, float l, float a){
    return(c * l * a);
}