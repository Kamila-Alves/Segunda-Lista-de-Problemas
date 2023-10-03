#include <stdio.h>

int main (){
    float valores[6];
    int valoresPositivos = 0;
    float soma = 0;
    int i; 

    printf("Digite seis numeros positivos ou negativos \n");

    for ( i = 0; i < 6; i++)
    {
        scanf("%f", &valores[i]);
        if (valores[i] > 0)
        {
            valoresPositivos++;
            soma += valores[i];
        }
        
    }

    printf("%d Numeros positivos \n", valoresPositivos);

    if (valoresPositivos > 0)
    {
        float media = (float) soma / valoresPositivos; 
        printf("Media dos positivos: %.1f \n", media);  
    }
    

    
    return 0;
}