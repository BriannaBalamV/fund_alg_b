#include <stdio.h>
#include <stdbool.h>


int main(int argc, char ** argv){

    int num;
    printf ("Enter an integer number: \n");
    scanf ("%d", &num);

    bool notHasReminder = ( num % 2 == 0);

    if (notHasReminder){
        printf("%d is even \n", num);
    } else {
        printf("%d is odd \n", num);
    }
    
    return 0;
}