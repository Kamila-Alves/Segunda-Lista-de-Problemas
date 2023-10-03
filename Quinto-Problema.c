#include <stdio.h>

int main(){
    int x, y;
    int soma = 0; 
    int i;
    int temp;

    printf("Digite dois valores: \n");
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        temp = x; 
        x = y;
        y = temp;
    }
    
    for ( i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    printf("A soma dos numeros impares entre %d e %d e %d \n", x, y, soma);
    

    return 0;
}