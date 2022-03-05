#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/utils.h"

int main (int argc, char** argv){
    printf("First number=%s \n", argv[1]);

    int number1 = atoi (argv[1]);
    int number2 = atoi (argv[2]);
    
    for (int i = 1; i <= number1; i++){
        int counter = i;
        bool doNotHasResidue = (counter % 2 == 0);
        if (doNotHasResidue) printf("\n All the even numbers between 0 to %d are: %d \n", number1, counter);
    }

    printf("\n Second number=%s \n", argv[2]);

     for (int i = 1; i <= number2; i++){
        int counter = i;
        bool hasResidue = (counter % 2 != 0);
        if (hasResidue) printf("\n All the odd numbers between 0 to %d are: %d \n", number2, counter);
    }

    return 0;
}