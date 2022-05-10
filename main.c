#include <stdio.h>
#include <stdlib.h>


int main(){
    int A; int B; int C;

    printf("DIGITE O VALOR DO LADO A:");
    scanf("%d", &A);

    printf("DIGITE O VALOR DO LADO B:");
    scanf("%d", &B);

    printf("DIGITE O VALOR DO LADO C:");
    scanf("%d", &C);

    // verrifica se é um trianhulo
    if(A + B > C && A + C > B && B + C > A){

        //verifica se o triangulo é EQUILATERO (TODOS OS LADOS IGUAIS)
        if (A == B && A == C)
            printf("Esse triangulo e EQUILATERO\n");

        else
            // verifica se é isosceles (DOIS LADOS IGUAIS)
            if(A == B || A == C || B == C)
            printf("Esse triangulo e ISOSCELES\n");

            //se n for nenhum dos dois TODOS OS LADOS SÃO DIFERENTES então é um triangulo escaleno
            else
                printf("Esse triangulo e ESCALENO \n");
    }

    // Informa que não é um triangulo e pede pra digitar novamente
    else {
        printf("Não forma um triangulo tente novamente!\n");
    }
    return 0;
}
