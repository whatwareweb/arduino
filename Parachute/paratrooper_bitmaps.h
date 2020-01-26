#ifndef PARATROOPER_BITMAPS_H
#define PARATROOPER_BITMAPS_H

#include <avr/pgmspace.h>

typedef struct
{
  byte x;
  byte y;
} Coord;

#define SKY_SIZE 20  // total number of slots in the sky we can fill with paratroopers (including those under the RHS tree)

extern Coord paratrooperPositions[ SKY_SIZE ];

extern const unsigned char paratrooper00_bitmap[];
extern const unsigned char paratrooper01_bitmap[];
extern const unsigned char paratrooper02_bitmap[];
extern const unsigned char paratrooper03_bitmap[];
extern const unsigned char paratrooper04_bitmap[];
extern const unsigned char paratrooper05_bitmap[];
extern const unsigned char paratrooper06_bitmap[];
extern const unsigned char paratrooper10_bitmap[];
extern const unsigned char paratrooper11_bitmap[];
extern const unsigned char paratrooper12_bitmap[];
extern const unsigned char paratrooper13_bitmap[];
extern const unsigned char paratrooper14_bitmap[];
extern const unsigned char paratrooper15_bitmap[];
extern const unsigned char paratrooper20_bitmap[];
extern const unsigned char paratrooper21_bitmap[];
extern const unsigned char paratrooper22_bitmap[];
extern const unsigned char paratrooper23_bitmap[];
extern const unsigned char paratrooper24_bitmap[];
extern const unsigned char paratrooper30_bitmap[];
extern const unsigned char paratrooper31_bitmap[];

extern const unsigned char *paratrooper_bitmaps[ SKY_SIZE ]; 

#define NUM_VICTIMS 6  // number of frames in the shark attack sequence

extern const unsigned char victim1_bitmap[];
extern const unsigned char victim2_bitmap[];
extern const unsigned char victim3_bitmap[];
extern const unsigned char victim4_bitmap[];
extern const unsigned char victim5_bitmap[];
extern const unsigned char victim6_bitmap[];

extern const unsigned char *victim_bitmaps[ NUM_VICTIMS ]; 
extern Coord victim_positions[ NUM_VICTIMS ];

#endif PARATROOPER_BITMAPS_H
