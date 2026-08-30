#include "grains.h"
uint64_t square(uint8_t n) {
    if (n < 1 || n > 64) return 0;
    return 1ULL << (n - 1);
}   

uint64_t total(void) {
    return UINT64_MAX;  // which is 2^64 - 1
}   