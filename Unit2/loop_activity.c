#include <stdio.h>
#include "../libraries/utils.h"

int main (){
    int number;
    printf ("Enter a number:");
    scanf("%d", &number);

   printf("Números pares del 0 al %d (",number);
    for(int i = 2; i <= number; i =  i + 2){
        printf("%d,",i);
    }
    printf(")");

    printf("\nNúmeros impares del 0 al %d (",number);
    for(int i = 1; i <= number; i =  i + 2){
        printf("%d,",i);
    }

    printf(")\n");
    
    return 0;
}