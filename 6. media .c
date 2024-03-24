#include <stdio.h>

int main(){
    float a1, a2, a3, mp, mf, af;
    printf("Digite a primeita nota: \n");
    scanf("%f", &a1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &a2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &a3);

    mp = (a1 + a2 + a3)/3;

    if(mp >= 7.0){
        printf("O aluno esta aprovado! Sua nota e: %.2f \n", mp);
    }
    else if (mp >=3.5 && mp < 7.0){
        printf("O aluno tera que fazer Avaliacao final. \nSua media parcial e: %.2f \n", mp);
        printf("Digite a nota da Avaliacao final:");
        scanf("%f", &af);

        mf = ((6 * mp + 4 * af) / 10);

        if(mf >=5.0){
            printf("O aluno esta aprovado, apos a Avaliacao final! \nSua media final e: %.2f", mf);
        }
        else{
            printf("O aluno esta reprovado, apos Avaliacao final! \nSua media final e: %.2f", mf);
        }
    } else {
        printf("O aluno esta reprovado! \nSua nota e: %.2f", mp);
    }
    return(0);
}
