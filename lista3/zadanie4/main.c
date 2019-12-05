#include <stdio.h>
#include "agents.h"

int main (void) {

    struct agent Bob = newagent(0, 0);
    struct agent Alice = newagent(1, 0);

    north(&Bob);
    south(&Alice);
    west(&Alice);
    north(&Bob);
    east(&Bob);
    south(&Alice);

    printf( "Odleglosc = %.3f\n", distance(Bob, Alice) );
    return 0;
}