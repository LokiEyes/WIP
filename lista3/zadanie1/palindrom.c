#include <stdbool.h>
#include <string.h>

bool palindrom(char napis[]) {
    int nLength = strlen(napis);
    int fixed;
    bool isPal = true;

    if ( nLength%2 == 0 )
        fixed = nLength/2;
    else
        fixed = (nLength - 1)/2;

    char temp[fixed];

    for ( int i = 0; i < fixed; i++ ) {
        temp[i] = napis[ nLength - ( i + 1 ) ];
    }

    for ( int i = 0; i < fixed; i++ ) {
        if ( napis[i] != temp[i] )
            isPal = false;
    }

    return isPal;
}