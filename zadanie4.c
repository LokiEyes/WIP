// zadanie4 - Igor Kiełbowski
#include <stdio.h>

int main(void) {
    int n;

    printf("Prosze podac liczbe calkowita n, na podstawie ktorej\n");
    printf("zostanie wydrukowany trojkat rownoramienny o n wierszach.\n");
    scanf("%i", &n);

    for (int wiersz = 1; wiersz < n+1; ++wiersz) {
        for (int spacje1 = 0; spacje1 < n-wiersz; ++spacje1) {
            printf(" ");
        }
        for (int znaki = 0; znaki < 2*wiersz - 1; ++znaki) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
