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

    // verrifica se � um trianhulo
    if(A + B > C && A + C > B && B + C > A){

        //verifica se o triangulo � EQUILATERO (TODOS OS LADOS IGUAIS)
        if (A == B && A == C)
            printf("Esse triangulo e EQUILATERO\n");

        else
            // verifica se � isosceles (DOIS LADOS IGUAIS)
            if(A == B || A == C || B == C)
            printf("Esse triangulo e ISOSCELES\n");

            //se n for nenhum dos dois TODOS OS LADOS S�O DIFERENTES ent�o � um triangulo escaleno
            else
                printf("Esse triangulo e ESCALENO \n");
    }

    // Informa que n�o � um triangulo e pede pra digitar novamente
    else {
        printf("N�o forma um triangulo tente novamente!\n");
    }
    return 0;
}
