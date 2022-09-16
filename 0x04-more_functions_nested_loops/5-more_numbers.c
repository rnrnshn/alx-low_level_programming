#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14.
 *
 * Return: Void.
 */

void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; a++)
	{
		a = 0;
		while (a <= 14)
		{
			if ( >= 10)
			{
				_putchar(a / 10 + '0');
			}
				_putchar(a  % 10 + '0');
			a++;
		}
	_putchar('\n');
	}
}
