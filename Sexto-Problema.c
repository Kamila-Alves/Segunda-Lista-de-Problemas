#include <stdio.h>

int main() {
    int n;
    int i;
    int resultado;
    
    printf("Digite um valor inteiro para saber a tabela de multiplicacao:");
    scanf("%d", &n);

    if (n > 0 && n < 1000)
    {
        printf("A tabuada de %d e: \n", n);

        for (i = 1; i <= 10; i++)
    {
        resultado = n * i;
        printf("%d X %d: = %d \n", n, i, resultado);
    }

    }

    return 0;
}