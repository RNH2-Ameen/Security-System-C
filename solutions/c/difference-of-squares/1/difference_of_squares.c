#include "difference_of_squares.h"
unsigned int square_of_sum(unsigned int n){
    unsigned int sosq=0;
    for(unsigned int i=1;i<=n;i++){
        sosq+=i;
    }   
    return sosq*sosq;
}
unsigned int sum_of_squares(unsigned int sq){
    unsigned int sqos=0;
    for(unsigned int i=1;i<=sq;i++){
        sqos+=(i*i);
    }
    return sqos;
}
unsigned int difference_of_squares(unsigned int n){
    return (square_of_sum(n)-sum_of_squares(n));
}
