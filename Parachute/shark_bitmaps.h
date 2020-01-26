#ifndef SHARK_BITMAPS_H
#define SHARK_BITMAPS_H

#include <avr/pgmspace.h>
#include "paratrooper_bitmaps.h"

#define NUM_SHARKS 5
#define MISSES_Y  64

extern const unsigned char shark1_bitmap[];
extern const unsigned char shark2_bitmap[];
extern const unsigned char shark3_bitmap[];

extern const unsigned char *shark_bitmaps[ NUM_SHARKS ]; 

extern const unsigned char missshark[];

extern byte misses_positions[];
extern Coord shark_positions[];

#endif SHARK_BITMAPS_H
