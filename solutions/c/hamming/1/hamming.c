#include "hamming.h"
int compute(const char *lhs, const char *rhs){
    int c=0,i=0,j=0;
    const char *p1 = lhs;
    const char *p2 = rhs;
    while(*lhs!='\0'){
        i++;
        lhs++;
    }
    while(*rhs!='\0'){
        j++;
        rhs++;
    }
    
    while((*p1!='\0') &&(*p2!='\0') ){
        if(*p1!=*p2){
            c++;
        }
        p1++;
        p2++;
    }
    return ((i!=j)?(-1):c);
}