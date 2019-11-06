// Zadanie 3 - Igor Kielbowski
#include <stdio.h>

int main(void) {
    int n = 1;
    float suma = 0;
    while (1) {
        for (int i = 1; i <= n; i++)
            suma += (1.0/i);
        if (suma > 10) {
            printf("%d\n", n);
            break;
        }
        n++;
        suma = 0;
    }
    return 0;
}
