// zadanie3.c - Igor Kiełbowski
#include <stdio.h>

int main(void) {
    int n;

    printf("Prosze podac liczbe calkowita n z zakresu od 1 do 20,\n");
    printf("aby wydrukowac prostokat o n wierszach i 2n kolumanch.\n");
    scanf_s("%i", &n);

    while (n<1 || n>20) {
        printf("Podana liczba n nie nalezy do narzuconego zakresu,\n");
        printf("prosze podac poprawna wartosc dla liczby n:\n");
        scanf_s("%i", &n);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2*n; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
