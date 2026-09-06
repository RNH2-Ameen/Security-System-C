#include "darts.h"
#include<stdint.h>
#include<math.h>
uint8_t score(coordinate_t a){
    float x=sqrt((a.x*a.x)+(a.y*a.y));
    if(x>10){
        return 0;
    }
    else if(x>5){
        return 1;
    }
    else if(x>1){
        return 5;
    }
    return 10;
}
