#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t *a) {
    return (a[0] * 10) + a[1];
}
