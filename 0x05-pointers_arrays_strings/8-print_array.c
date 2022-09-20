#include "main.h"
11;rgb:0000/0000/0000#include <stdio.h>

/**
 * print_array - print an array.
 * @a: the array to print.
 * @n: array's length
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
