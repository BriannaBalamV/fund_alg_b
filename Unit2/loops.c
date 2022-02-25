#include <stdio.h>
#include "../libraries/utils.h"


int main (int argc, char** argv){

    for ( int iterator = 1 ; iterator <= 10 ; iterator = iterator + 1){  //(interadorVariable; condicionParaEejecutarse; incrementadorDeVariable){
        printf("ITERATOR: %d \n", iterator);
        sleep(1000);
    }


    return 0;
}
