// Zadanie 6 - Igor Kielbowski
#include <stdio.h>

int divisorsSum(int x) {
    int result = 0;

    for(int i = 1; i < x; i++)
        if(x%i == 0)
            result += i;

    return result;
}

int main(void) {
    const int fixed = 1001;
    int divisors[fixed];
    divisors[0] = 0;

    for (int i = 1; i < fixed; i++)
        divisors[i] = divisorsSum(i);
    
    printf("Liczby doskonale:\n");
    for (int i = 1; i < fixed; i++)
        if(divisors[i] == i)
            printf("%d ", i);

    printf("\n\nLiczby zaprzyjaznione:\n");
    for (int i = 1; i < fixed; i++)
        if(divisors[divisors[i]] == i && divisors[i] != i)
            printf("%d i %d; ", divisors[i], i);

    printf("\n");
    return 0;
}
