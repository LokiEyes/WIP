#include "head.h"

double rozwiazanie(double a, double b, double eps) {

    double c;

    while ( b - a > eps ) {
        c = ( a + b )/2;
    
        if ( f(c) == 0 ) {
            return c;
        } else {
            if ( f(a) * f(c) < 0 )
                b = c;
            else
                a = c;
        } 
    }

    return c;
}
