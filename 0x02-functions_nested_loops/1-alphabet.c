#include "main.h"

/**
 * Description: print_alphabet - check the code
 * print_alphabet - Entry point.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		_putchar (abc);
		abc++;
	}
	_putchar ('\n');
}
