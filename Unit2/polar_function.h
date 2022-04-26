/*************************************************************
 *      calculadora de numeros rectangulares a polares       *
 *************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "../unit1/utils.h"
#include <string.h>

typedef struct POLAR_STRUCT {
      float modMag;
      float modGradeR;
      float modGradeI;
        // 4(5+5i)
    } polar_struct;


polar_struct* polar_function(float real, float imag){
    polar_struct* resultado = (polar_struct*) malloc(sizeof(polar_struct));
    

    bool isEqualCero = (real == 0 && imag == 0);

    if (isEqualCero) return 0;


     const float PI = 3.1416;

    float real_2 = pow(real, 2);
    float imag_2 = pow(imag, 2);

   
    resultado->modMag = 0; sqrt(real_2 + imag_2);

    resultado->modMag = 0;
    resultado->modGradeI = 0;
    resultado->modGradeR = 0;


}
