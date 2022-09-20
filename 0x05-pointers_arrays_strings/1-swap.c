#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: 1st integer.
 * @b: 2nd integer.
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
