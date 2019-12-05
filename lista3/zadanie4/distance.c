#include "agents.h"
#include <math.h>

double distance(struct agent a1, struct agent a2) {
    return sqrt( pow( ( a1.posX - a2.posX ), 2) + pow( ( a1.posY - a2.posY ), 2) );
}