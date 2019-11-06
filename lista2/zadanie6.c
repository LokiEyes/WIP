// Zadanie 6 - Igor Kielbowski
#include <stdio.h>

int divisorsSum(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n%i == 0) sum += i;
    }
    return sum;
}

int main(void) {
    int fixed = 1000;

    printf("Liczby doskonałe:\n");
    for (int i = 1; i < fixed; i++)
        if (i == divisorsSum(i)) printf("%d\n", i);

    printf("Liczby zaprzyjaźnione:\n");
    for(int i = 1; i < fixed; i++)
        for (int j = 1; j < fixed; j++)
            if (i == divisorsSum(j) && j == divisorsSum(i) && i != j) {
                printf("%d i %d\n", i, j);
                i = j;
            }

    return 0;
}
