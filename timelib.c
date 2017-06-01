/******************************************************************************
*	TIME LIBRARY
*	AUTHOR: Rishiraj Manwatkar <manwatkar.r@gmail.com>/<manwatkar@outlook.com>
******************************************************************************/
#include <time.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "timelib.h"

clock_t *start;
clock_t *end;
uint32_t maxCount;

uint32_t tl_init(uint32_t count)
{
    if(count)
    {
        maxCount = count + 1;
        start = (clock_t *) calloc (maxCount, sizeof(clock_t));

        if(start != NULL)
        {
            end = (clock_t *) calloc (maxCount, sizeof(clock_t));

            if(end != NULL)
            {
                return 0;
            }
            else
            {
                free((clock_t *)start);
                return 2;
            }
        }
        else
        {
            return 1;
        }
    }
}

void tl_start(uint32_t index)
{
    if(index < maxCount && start)
    {
        start[index] = clock();
    }
}

void tl_end(uint32_t index)
{
    if(index < maxCount && end)
    {
        end[index] = clock();
    }
}

void tl_show()
{
    uint32_t i = 0;

    for(i = 0; i<maxCount; i++)
    {
        if(start[i] && end[i])
        {
            printf("%d) %f mSec\n", i,
	              ((double)(end[i] - start[i]) * 1000.0 / CLOCKS_PER_SEC));
        }
    }

    if(start)
    {
        free(start);
    }

    if(end)
    {
        free(end);
    }
}
