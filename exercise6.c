#include <stdio.h>

int factorial(int n)
{
    int factvalue;

    //factorial base case of n <= 1 is 1
    if (n <= 1)
    {
        return (1);
    }
    else
    {
        //recursive call
        factvalue = n* factorial(n-1);
        return (factvalue);
    }
}

int main()
{   
    int n, f;
    scanf("%d", &n);
    f = factorial(n);

    printf("Fatorial: %d\n", f);
    
    return 0;
}
  