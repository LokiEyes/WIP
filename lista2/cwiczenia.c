#include <stdio.h>

int main(void) {
    int n, y;
    printf("Podaj y\n");
    scanf("%d", &y);
    printf("Podaj dlugosc tablicy\n");
    scanf("%d", &n);
    int i = 0, j = 0, k = n-1;
    int x[n];
    printf("Podaj elementy tablicy\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &x[i]);

    while (j <= k) {
        if (x[j] == y)
            j++;
        else if (x[j] < y) {
            if (i == j) {
                i++;
                j++;
            } else {
                x[i] = x[j];
                x[j] = y;
                i++;
                j++;
            }
        } else {
            int h = x[j];
            x[j] = x[k];
            x[k] = h;
            k--;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", x[i]);
    printf("\n");

    return 0;
}
