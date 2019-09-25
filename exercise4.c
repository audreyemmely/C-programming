#include<stdio.h>

int main()
{   
    int x, n, pow = 1, count = 0;

    scanf("%d%d", &x, &n);
    while (count != n)
    {
        pow *= x;
        count += 1;
    }

    printf("%d\n", pow);    
    
    return 0;
}
