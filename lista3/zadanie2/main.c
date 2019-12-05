#include <stdio.h>
#include "head.h"

int main(void) {
    
    for ( int k = 1; k <= 8; k++ ) {
        printf( "%f\n", rozwiazanie( 3.1415, 3.1416, pow( 10, -k)  ) );
    }

    return 0;
}
