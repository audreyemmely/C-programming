#include<stdio.h>

struct DADO
{
    char sNome[40];
    int iIdade;
};

int main()
{   
    int iIndice;
    struct DADO sDados[5];

    /* A estrutura é dividida em duas partes por um ponto (.). Tem-se o nome da estrutura à esquerda e o nome do campo à direita. Neste exemplo, como está sendo manipulado um vetor de estruturas, também tem índice para cada linha do vetor. */
    for (iIndice = 0; iIndice < 5; iIndice++)
    {
        printf("\nEntre com o nome -> ");
        scanf("%s", sDados[iIndice].sNome);
        printf("Entre com a idade -> ");
        scanf("%d", &sDados[iIndice].iIdade); 
    }
    

    for (iIndice = 0; iIndice < 5; iIndice++)
    {
        printf("\n%s tem %d anos", sDados[iIndice].sNome, sDados[iIndice].iIdade);
    }
    printf("\n");

    return 0;
}

