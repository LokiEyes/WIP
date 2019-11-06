// Zadanie 5 - Igor Kielbowski
#include <stdio.h>

int NWD(int a, int b) {
    while (a != b)
       if (a > b)
           a-=b;
       else
           b-=a;
    return a;
}

int setPower(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (NWD(i, j) == 1)
                result++;
    return result;
}

int main(void) {
    int n = 1000;
    FILE *fptr;

    fptr = fopen("Data2.csv", "w");
    for (float i = 1; i <= n; i++)
        fprintf(fptr, "%.0f;%f\n", i, setPower(i)/(i*i));
    fclose(fptr);
    return 0;
}
