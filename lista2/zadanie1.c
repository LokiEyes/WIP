// Zadanie 1 - Igor Kielbowski
#include <stdio.h>
#include <string.h>

int main(void) {
    int zloty[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int groszy[] = {50, 20, 10, 5, 2, 1};
    int zloteIn, groszeIn;

    printf("podaj liczbe zloty: \n");
    do {
        scanf("%d", &zloteIn);
        if (zloteIn < 0)
            printf("Blad wejscia, prosze wprowadzic ponownie: \n");
    } while (zloteIn < 0);

    printf("podaj liczbe groszy: \n");
    do {
        scanf("%d", &groszeIn);
        if (groszeIn < 0 || groszeIn > 99)
            printf("Blad wejscia, prosze wprowadzic ponownie: \n");
    } while (groszeIn < 0 || groszeIn > 99);

    int nominal = 0, counter = 0, flaga = 1;
    while (nominal < 8) {
        if (zloteIn - zloty[nominal] >= 0) {
            counter++;
            zloteIn -= zloty[nominal];
        } else {
            if (counter != 0) {
                if (flaga) {
                    printf("banknoty:\n");
                    flaga = 0;
                }
                printf("%d x %d zl\n", counter, zloty[nominal]);
            }
            nominal++;
            counter = 0;
            if (zloty[nominal] == 5) printf("monety:\n");
        }
    }

    nominal = 0;
    counter = 0;
    while (nominal < 6) {
        if (groszeIn - groszy[nominal] >= 0) {
            counter++;
            groszeIn -= groszy[nominal];
        } else {
            if (counter != 0) printf("%d x %d gr\n", counter, groszy[nominal]);
            nominal++;
            counter = 0;
        }
    }
    return 0;
}
