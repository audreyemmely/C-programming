#include<stdio.h>

int main()
{
    int i, j, n, multi = 0, multj = 0, k;

    scanf("%d%d%d", &n, &i, &j);
    printf("Os %d primeiros multiṕlos de %d ou de %d sao: ", n, i, j);

    for (k = 0; k < n; k++)
    {
        if (multi < multj)
        {
            printf("%d", multi);
            multi += i;
        }
        else if (multi > multj)
        {
            printf("%d", multj);
            multj += j;
        }
        else 
        {
            printf("%d", multj);
            multi += i;
            multj += j;
        }
    }
    printf("\n");

    return 0;
}
