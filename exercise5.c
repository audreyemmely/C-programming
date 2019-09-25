#include<stdio.h>

int main()
{   
    int n, grade, i = 0, highestgrade = 0, lowestgrade = 100;
    scanf("%d", &n);

    while (i < n)
    {
        scanf("%d", &grade);
        i++;
        if (highestgrade < grade)
            highestgrade = grade;
        if (lowestgrade > grade)
            lowestgrade = grade;
    }
    
    printf("Maior nota: %d\n", highestgrade);
    printf("Menor nota: %d\n", lowestgrade);
    
    return 0;
}
