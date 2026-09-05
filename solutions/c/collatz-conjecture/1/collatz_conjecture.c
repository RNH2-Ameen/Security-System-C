#include "collatz_conjecture.h"
static int even(unsigned int n){
    return (n%2==0);
}
int steps( int n){
    if(n<1){
        return ERROR_VALUE;
    }
    int count=0;
    while(n!=1){
        if(even(n)){
            n/=2;
            
        }
        else{
            n*=3;
            n+=1;
            
        }
        count++;
    }
    return count;

}