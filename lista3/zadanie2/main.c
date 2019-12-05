#include <stdio.h>
#include "head.h"

int main(void) {
    
    for ( int k = 1; k <= 8; k++ ) {
        printf( "%.2f\n", rozwiazanie( 2, 4, pow( 10, -k)  ) );
    }

    return 0;
}
