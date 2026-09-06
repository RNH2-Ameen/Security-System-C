#ifndef DARTS_H
#define DARTS_H

// 1. You MUST include this here so the header recognizes uint8_t!
#include <stdint.h>

typedef struct {
   float x;
   float y;
} coordinate_t;

// 2. Make sure this explicitly states uint8_t
uint8_t score(coordinate_t landing_position);

#endif
