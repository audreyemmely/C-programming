#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i * (i + 1) * (i + 2) < n; i++)
        ;

    if (i*(i+1)*(i+2) == n)
        printf("%d * %d * %d = %d\nVerdadeiro\n", i, i + 1, i + 2, n);
    else
        printf("Falso");

    return 0;
}
