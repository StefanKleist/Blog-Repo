#include <avr/pgmspace.h>

const unsigned char circle[]PROGMEM={
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x7,0xf8,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x7f,0xff,0x80,0x0,0x0,0x0,
0x0,0x0,0x3,0xff,0xff,0xf0,0x0,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xfc,0x0,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xfe,0x0,0x0,0x0,
0x0,0x0,0x7f,0xf0,0x3,0xff,0x80,0x0,0x0,
0x0,0x0,0xff,0x80,0x0,0x7f,0xc0,0x0,0x0,
0x0,0x1,0xfe,0x0,0x0,0x1f,0xe0,0x0,0x0,
0x0,0x3,0xf8,0x0,0x0,0x7,0xf0,0x0,0x0,
0x0,0x7,0xf0,0x0,0x0,0x3,0xf8,0x0,0x0,
0x0,0xf,0xe0,0x0,0x0,0x1,0xfc,0x0,0x0,
0x0,0xf,0xc0,0x0,0x0,0x0,0xfc,0x0,0x0,
0x0,0x1f,0x80,0x0,0x0,0x0,0x7e,0x0,0x0,
0x0,0x3f,0x0,0x0,0x0,0x0,0x3f,0x0,0x0,
0x0,0x3e,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,
0x0,0x7e,0x0,0x0,0x0,0x0,0x1f,0x80,0x0,
0x0,0x7c,0x0,0x0,0x0,0x0,0xf,0x80,0x0,
0x0,0x7c,0x0,0x0,0x0,0x0,0xf,0x80,0x0,
0x0,0xf8,0x0,0x0,0x0,0x0,0x7,0xc0,0x0,
0x0,0xf8,0x0,0x0,0x0,0x0,0x7,0xc0,0x0,
0x0,0xf8,0x0,0x0,0x0,0x0,0x7,0xc0,0x0,
0x0,0xf0,0x0,0x0,0x0,0x0,0x3,0xc0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x1,0xf0,0x0,0x0,0x0,0x0,0x3,0xe0,0x0,
0x0,0xf0,0x0,0x0,0x0,0x0,0x3,0xc0,0x0,
0x0,0xf8,0x0,0x0,0x0,0x0,0x7,0xc0,0x0,
0x0,0xf8,0x0,0x0,0x0,0x0,0x7,0xc0,0x0,
0x0,0xf8,0x0,0x0,0x0,0x0,0x7,0xc0,0x0,
0x0,0x7c,0x0,0x0,0x0,0x0,0xf,0x80,0x0,
0x0,0x7c,0x0,0x0,0x0,0x0,0xf,0x80,0x0,
0x0,0x7e,0x0,0x0,0x0,0x0,0x1f,0x80,0x0,
0x0,0x3e,0x0,0x0,0x0,0x0,0x1f,0x0,0x0,
0x0,0x3f,0x0,0x0,0x0,0x0,0x3f,0x0,0x0,
0x0,0x1f,0x80,0x0,0x0,0x0,0x7e,0x0,0x0,
0x0,0xf,0xc0,0x0,0x0,0x0,0xfc,0x0,0x0,
0x0,0xf,0xe0,0x0,0x0,0x1,0xfc,0x0,0x0,
0x0,0x7,0xf0,0x0,0x0,0x3,0xf8,0x0,0x0,
0x0,0x3,0xf8,0x0,0x0,0x7,0xf0,0x0,0x0,
0x0,0x1,0xfe,0x0,0x0,0x1f,0xe0,0x0,0x0,
0x0,0x0,0xff,0x80,0x0,0x7f,0xc0,0x0,0x0,
0x0,0x0,0x7f,0xf0,0x3,0xff,0x80,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xfe,0x0,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xfc,0x0,0x0,0x0,
0x0,0x0,0x3,0xff,0xff,0xf0,0x0,0x0,0x0,
0x0,0x0,0x0,0x7f,0xff,0x80,0x0,0x0,0x0,
0x0,0x0,0x0,0x7,0xf8,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

const unsigned char x_bitmap[]PROGMEM={
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0xff,0xff,0xc0,0x1,0xff,0xff,0xe0,0x0,
0x1,0xff,0xff,0xe0,0x1,0xff,0xff,0xc0,0x0,
0x1,0xff,0xff,0xf0,0x3,0xff,0xff,0xc0,0x0,
0x0,0xff,0xff,0xf0,0x7,0xff,0xff,0x80,0x0,
0x0,0xff,0xff,0xf8,0x7,0xff,0xff,0x80,0x0,
0x0,0x7f,0xff,0xf8,0xf,0xff,0xff,0x0,0x0,
0x0,0x3f,0xff,0xfc,0xf,0xff,0xfe,0x0,0x0,
0x0,0x3f,0xff,0xfe,0x1f,0xff,0xfe,0x0,0x0,
0x0,0x1f,0xff,0xfe,0x1f,0xff,0xfc,0x0,0x0,
0x0,0x1f,0xff,0xff,0x3f,0xff,0xfc,0x0,0x0,
0x0,0xf,0xff,0xff,0x7f,0xff,0xf8,0x0,0x0,
0x0,0xf,0xff,0xff,0xff,0xff,0xf8,0x0,0x0,
0x0,0x7,0xff,0xff,0xff,0xff,0xf0,0x0,0x0,
0x0,0x3,0xff,0xff,0xff,0xff,0xe0,0x0,0x0,
0x0,0x3,0xff,0xff,0xff,0xff,0xe0,0x0,0x0,
0x0,0x1,0xff,0xff,0xff,0xff,0xc0,0x0,0x0,
0x0,0x1,0xff,0xff,0xff,0xff,0xc0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0x80,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0x80,0x0,0x0,
0x0,0x0,0x7f,0xff,0xff,0xff,0x0,0x0,0x0,
0x0,0x0,0x3f,0xff,0xff,0xfe,0x0,0x0,0x0,
0x0,0x0,0x3f,0xff,0xff,0xfe,0x0,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xfc,0x0,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xfc,0x0,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xfc,0x0,0x0,0x0,
0x0,0x0,0x3f,0xff,0xff,0xfe,0x0,0x0,0x0,
0x0,0x0,0x3f,0xff,0xff,0xfe,0x0,0x0,0x0,
0x0,0x0,0x7f,0xff,0xff,0xff,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0x80,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0x80,0x0,0x0,
0x0,0x1,0xff,0xff,0xff,0xff,0xc0,0x0,0x0,
0x0,0x1,0xff,0xff,0xff,0xff,0xc0,0x0,0x0,
0x0,0x3,0xff,0xff,0xff,0xff,0xe0,0x0,0x0,
0x0,0x3,0xff,0xff,0xff,0xff,0xe0,0x0,0x0,
0x0,0x7,0xff,0xff,0xff,0xff,0xf0,0x0,0x0,
0x0,0xf,0xff,0xff,0xff,0xff,0xf8,0x0,0x0,
0x0,0xf,0xff,0xff,0xff,0xff,0xf8,0x0,0x0,
0x0,0x1f,0xff,0xff,0x7f,0xff,0xfc,0x0,0x0,
0x0,0x1f,0xff,0xfe,0x3f,0xff,0xfc,0x0,0x0,
0x0,0x3f,0xff,0xfc,0x3f,0xff,0xfe,0x0,0x0,
0x0,0x3f,0xff,0xfc,0x1f,0xff,0xfe,0x0,0x0,
0x0,0x7f,0xff,0xf8,0x1f,0xff,0xff,0x0,0x0,
0x0,0xff,0xff,0xf8,0xf,0xff,0xff,0x80,0x0,
0x0,0xff,0xff,0xf0,0x7,0xff,0xff,0x80,0x0,
0x1,0xff,0xff,0xe0,0x7,0xff,0xff,0xc0,0x0,
0x1,0xff,0xff,0xe0,0x3,0xff,0xff,0xc0,0x0,
0x3,0xff,0xff,0xc0,0x3,0xff,0xff,0xe0,0x0,
0x3,0xff,0xff,0xc0,0x1,0xff,0xff,0xe0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

