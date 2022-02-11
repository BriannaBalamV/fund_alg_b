#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// temperatura con condiciones//
// frío: 16
// cañiente: 29
int frio= 16;
int caliente= 29;
int sofa= 7000;



int main(int argc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney= atoi (argv[2]);
    char inputName = argv[3][0];
    bool temp_condition = (inputTemp == frio);
    bool temp_condition2 = (inputTemp == caliente);    
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney = ( inputMoney >= sofa);
    bool isTheMale = ( inputName != 'F' );
    

    if(canRobotMove){
        //Robot.move (x_cord, y_cord);
    } else {
        //Robot_stop (x_cord, y_cord);
    }

    if (hasUserMoney){
        //Allow to buy
    } else {
        //reject to buy
    }

    if (inputTemp <= 29){
        //Robobt move (x_axis, y_axis)
    }

    return 0;
}