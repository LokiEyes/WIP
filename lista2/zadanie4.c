// Zadanie 3 - Igor Kielbowski
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i*i <= n; i++)
        if (n%i == 0)
            return 0;
    return 1;
}

int pi(int x) {
    int result = 0;
    for (int n = 2; n <= x; n++)
        if (isPrime(n))
            result++;
    return result;
}

int main(void) {
    int x = 100000;
    FILE *fptr;

    fptr = fopen("Data.csv", "w");

    for (int n = 2; n <= x; n++) {
        if (isPrime(n))
            fprintf(fptr, "%d;%f\n", n, pi(n)/(n/log(n)));
    }
    fclose(fptr);

    return 0;
}
