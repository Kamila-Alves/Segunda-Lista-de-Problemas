#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor1;
    int valor2;
    int valor3;

    printf("Digite o Primeiro Valor \n");
    scanf("%d", &valor1);
    printf("Digite o Segundo Valor \n");
    scanf("%d", &valor2);
    printf("Digite o Terceiro Valor \n");
    scanf("%d", &valor3);

    int MaiorValor = valor1;

    if (valor2 > MaiorValor)
    {
        MaiorValor = valor2;
    }

    if (valor3 > MaiorValor)
    {
        MaiorValor = valor3;
    }


    printf("%d eh o maior \n", MaiorValor);



    return 0;
}