#include "queen_attack.h"
#include <stdlib.h>
attack_status_t  can_attack(position_t white, position_t black){

    if((white.row>7 )|| (white.column>7) || (black.row>7) || (black.column>7)||((white.row==black.row)&&(white.column==black.column))){
        return 2;
    }
    if(white.row==black.row || white.column==black.column || ((abs(white.column-black.column)-abs(white.row-black.row))==0)){
        return 1;
    }
    else{
        return 0;
    }
    
    
    
}