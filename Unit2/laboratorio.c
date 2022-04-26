#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "polar_function.h"

int main(int argc, char** argv){

    polar_struct* myResult = polar_function( atof(argv[1]), atof(argv[2]));
    printf("%.02f(cos(%f)) + i sen(%.f))\n", myResult->modMag, myResult->modGradeR, myResult->modGradeI);
}