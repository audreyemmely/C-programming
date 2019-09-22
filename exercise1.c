#include <stdio.h>

int main()
{   
    int numbers;
        
    while (scanf("%d", &numbers) && numbers != 0)
    { 
        printf("%d\n", numbers*numbers);
    }
    return 0;
}
