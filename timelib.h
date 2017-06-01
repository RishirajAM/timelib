/******************************************************************************
*	TIME LIBRARY
*	AUTHOR: Rishiraj Manwatkar <manwatkar.r@gmail.com>/<manwatkar@outlook.com>
******************************************************************************/
#include <stdint.h>

#ifndef __TIME_LIB__
#define __TIME_LIB__

uint32_t tl_init(uint32_t count);

void tl_start(uint32_t index);

void tl_end(uint32_t index);

void tl_show();

#endif /*__TIME_LIB__*/
