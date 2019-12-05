#include "head.h"

int phi (long int n) {
    int counter = 0;

    for ( long int i = 1; i < n; i++ ) {
        if ( nwd(i, n) == 1 )
            counter++;
    }

    return counter;
}