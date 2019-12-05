#include <stdio.h>
#include "head.h"

int main(void) {

    long int test;
    scanf("%ld", &test);

    printf("%d\n", phi(test));

    return 0;
}