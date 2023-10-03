#include <stdio.h>

int main (){

    int numero;
    int i;
    int linhas; 

    printf("Digite o numero de linhas desejadas: ");
    scanf("%d", &numero);

    int primeiraLinha = 1;

    for ( i = 0; i < numero; i++)
    {
        printf("%d %d %d PUM \n", primeiraLinha, primeiraLinha + 1, primeiraLinha + 2);
        primeiraLinha += 4;
    }
    


    return 0;
}