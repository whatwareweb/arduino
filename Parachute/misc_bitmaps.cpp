#include "misc_bitmaps.h"

const unsigned char heli_bitmap[] PROGMEM =
{
  32, 17,
  0x02,0x00,0x00,0x00,
  0x02,0x00,0x00,0x00,
  0x1F,0xC0,0x04,0x00,
  0x1F,0xC0,0x04,0x00,
  0x3F,0xE0,0x3F,0x80,
  0x3F,0xFF,0xFF,0xC0,
  0x7E,0x49,0x30,0xE0,
  0x7F,0xFF,0xF0,0x70,
  0xFE,0x49,0x30,0x38,
  0xFE,0x49,0x3F,0xFE,
  0x7E,0x49,0x3F,0xFF,
  0x3F,0xFF,0xFF,0xFF,
  0x0F,0xFF,0xFF,0xFE,
  0x07,0xFF,0xFF,0xFC,
  0x00,0x30,0x01,0x80,
  0x00,0x48,0x02,0x40,
  0x00,0x30,0x01,0x80
};

const unsigned char water_bitmap[] PROGMEM =
{
  128, 22,
  0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x70,0x00,0x00,0x03,0xC0,0x00,0x00,
  0x0E,0x07,0x80,0x00,0x3F,0x00,0x00,0x01,0xE0,0x0F,0xC0,0x00,0xFC,0x00,0x00,0x00,
  0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x78,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0x87,0x80,0x00,0x00,0x00,0x7F,0x00,0x3C,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,
  0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x00,
  0x00,0x00,0x3E,0x00,0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,
  0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char left_bitmap[] PROGMEM =
{
  36, 52,
0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x08,0x20,0x00,
  0x14,0x01,0x11,0x54,0x00,
  0x0A,0x8A,0x8A,0xAA,0x00,
  0x05,0x15,0x55,0x55,0x40,
  0x02,0x2A,0xAA,0xAA,0xA0,
  0x01,0x55,0x55,0x55,0x50,
  0x02,0xAA,0xAA,0xAA,0xA0,
  0x15,0x55,0x51,0x40,0x40,
  0x2A,0xAA,0xA8,0x00,0x00,
  0x55,0x55,0x40,0x00,0x00,
  0x8A,0xA8,0x80,0x00,0x00,
  0x10,0x41,0x00,0x00,0x00,
  0x03,0xA0,0x00,0x00,0x00,
  0x07,0x80,0x00,0x00,0x00,
  0x0F,0x00,0x00,0x00,0x00,
  0x1E,0x00,0x00,0x00,0x00,
  0x1E,0x00,0x00,0x00,0x00,
  0x3C,0x00,0x00,0x00,0x00,
  0x7C,0x00,0x00,0x00,0x00,
  0x78,0x00,0x00,0x00,0x00,
  0xF8,0x00,0x00,0x00,0x00,
  0xF0,0x00,0x00,0x00,0x00,
  0xF0,0x00,0x00,0x00,0x00,
  0xE0,0x00,0x00,0x00,0x00,
  0xE0,0x00,0x00,0x00,0x00,
  0xE0,0x00,0x00,0x00,0x00,
  0xC0,0x00,0x00,0x00,0x00,
  0xC0,0x00,0x00,0x00,0x00,
  0xF1,0xC0,0x00,0x00,0x00,
  0xF7,0x80,0x00,0x00,0x00,
  0xFF,0x00,0x00,0x00,0x00,
  0xFF,0xF0,0x00,0x00,0x00,
  0xFF,0xFE,0x00,0x00,0x00,
  0xFF,0xFF,0x00,0x00,0x00,
  0xFF,0xFF,0x80,0x00,0x00,
  0xFF,0xFF,0x00,0x00,0x00,
  0xFF,0xF0,0x00,0x00,0x00,
  0x01,0xF8,0x00,0x00,0x00,
  0xA8,0x78,0x00,0x00,0x00,
  0x55,0x30,0x00,0x00,0x00,
  0xAA,0x80,0x00,0x00,0x00,
  0x55,0x00,0x00,0x00,0x00,
  0xAA,0x80,0x00,0x00,0x00,
  0x55,0x00,0x00,0x00,0x00,
  0xAA,0x00,0x00,0x00,0x00,
  0x55,0x00,0x00,0x00,0x00,
  0xAA,0x00,0x00,0x00,0x00,
  0x54,0x00,0x00,0x00,0x00,
  0xAA,0x00,0x00,0x00,0x00,
  0x54,0x00,0x00,0x00,0x00,
  0xAA,0x00,0x00,0x00,0x00
};

const unsigned char right_bitmap[] PROGMEM =
{
  35, 47,
  0x00,0x00,0x00,0x80,0x00,
  0x02,0x22,0x01,0x10,0x00,
  0x01,0x55,0x10,0x40,0x00,
  0x02,0xAA,0x8A,0xAA,0x80,
  0x55,0x55,0x55,0x55,0x00,
  0xAA,0xAA,0xAA,0xAA,0x80,
  0x55,0x55,0x55,0x51,0x40,
  0x2A,0x8A,0xAA,0xA8,0x00,
  0x54,0x15,0x10,0x08,0x00,
  0xA0,0x2A,0x87,0x80,0x00,
  0x00,0x15,0x43,0xC0,0x00,
  0x00,0x0A,0x81,0xE0,0x00,
  0x00,0x05,0x01,0xE0,0x00,
  0x00,0x02,0x00,0xF0,0x00,
  0x00,0x00,0x00,0x78,0x00,
  0x00,0x00,0x00,0x7C,0x00,
  0x00,0x00,0x00,0x3C,0x00,
  0x00,0x00,0x00,0x3E,0x00,
  0x00,0x00,0x00,0x1E,0x00,
  0x00,0x00,0x00,0x1F,0x00,
  0x00,0x00,0x00,0x1F,0x00,
  0x00,0x00,0x00,0x0F,0x00,
  0x00,0x00,0x00,0x0F,0x80,
  0x00,0x00,0x00,0x0F,0x80,
  0x00,0x00,0x07,0xCF,0xE0,
  0x00,0x00,0x01,0xFF,0xE0,
  0x00,0x00,0x1F,0xFF,0xE0,
  0x00,0x00,0x7F,0xFF,0xE0,
  0x00,0x00,0xFF,0xFF,0xE0,
  0x00,0x00,0x7F,0xFF,0xE0,
  0x00,0x01,0xFF,0xFF,0xE0,
  0x00,0x07,0xFF,0xFF,0xE0,
  0x00,0x07,0xFF,0xC0,0x60,
  0x00,0x03,0xCE,0x0A,0x00,
  0x00,0x00,0x00,0x55,0x40,
  0x00,0x00,0x00,0xAA,0xA0,
  0x00,0x00,0x00,0x55,0x40,
  0x00,0x00,0x00,0x2A,0xA0,
  0x00,0x00,0x00,0x15,0x40,
  0x00,0x00,0x00,0x2A,0xA0,
  0x00,0x00,0x00,0x15,0x40,
  0x00,0x00,0x00,0x0A,0xA0,
  0x00,0x00,0x00,0x15,0x40,
  0x00,0x00,0x00,0x0A,0xA0,
  0x00,0x00,0x00,0x15,0x40,
  0x00,0x00,0x00,0x0A,0xA0,
  0x00,0x00,0x00,0x15,0x40
};
