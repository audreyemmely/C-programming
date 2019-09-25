#include<stdio.h>

int main()
{   
    int number, i = 0, odd = 1;

    scanf("%d", &number);

    while (i < number)
    {
        printf("%d\n", odd);
        odd += 2;
        i++;
    }
        
    return 0;
}
