// Zadanie 2 - Igor Kielbowski
#include <stdio.h>

int main(void) {
    int length = 0;
    float f, suma = 0;

    printf("Prosze podac liczbe liczb do wczytania:\n");
    do {
        scanf("%d", &length);
        if (length <= 0)
            printf("Dlugosc mniejsza/rowna zero, wprowadz ponownie:\n");
    }while (length <= 0);

    for (int i = 0; i < length; i++) {
        scanf("%f", &f);
        suma += f;
    }

    printf("%.2f\n", suma/length);
    return 0;
}
