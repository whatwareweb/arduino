#ifndef BOAT_BITMAPS_H
#define BOAT_BITMAPS_H

#include <avr/pgmspace.h>
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#define NUM_BOATS 3
#define BOAT_Y 62

extern byte boatX[ NUM_BOATS ];

extern const unsigned char boat0_bitmap[];
extern const unsigned char boat1_bitmap[];
extern const unsigned char boat2_bitmap[];

extern const unsigned char *boat_bitmaps[ NUM_BOATS ];

#endif BOAT_BITMAPS_H
