#include <stdio.h>
#include <locale.h>

float media(float n1, float n2, float n3);

void conceito(float ma);

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, r;
    printf("Digite as três notas: \n");
    scanf("%f %f %f", &a, &b, &c);
    r = media(a, b, c);
    printf("Média: %.1f\n", r);
    conceito(r);
    return(0);
}

float media (float n1, float n2, float n3){
    return((n1 + n2 + n3) / 3);
}

void conceito(float ma){
    if(ma >= 9){
        printf("CONCEITO: A");
    }
    else if (ma >= 7 && ma < 9){
        printf("CONCEITO: B");
    }
    else if (ma >= 6 && ma < 7){
        printf("CONCEITO: C");
    }
    else if (ma >= 4 && ma < 6){
        printf("CONCEITO: D");
    }
    else{
        printf("CONCEITO: E");
    }
}