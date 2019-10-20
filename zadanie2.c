// zadanie2.c - Igor Kiełbowski
#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta, x1, x2;
    printf("Prosze podac po spacji 3 liczby rzeczywiste: a =/= 0, b oraz c,\n");
    printf("potrzebne do rozwiazania rownania kwadratowego.\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    while (a == 0) {
        printf("a jest rowne 0, wprowadz ponownie:\n");
        scanf("%f", &a);
    }

    delta = b*b - 4*a*c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        if (x1 == 0) x1 = 0;
        if (x2 == 0) x2 = 0;
        printf("Wyniki to x1 = %.5f i x2 = %.5f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b/(2*a));
        if (x1 == 0) x1 = 0;
        printf("Wynik to x = %.5f", x1);
    } else {
        printf("Delta jest mniejsza od zera,\n");
        printf("rownanie nie posiada rozwiazan");
    }

    printf("\n");
    return 0;
}
