#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int number = 122;

	while (number > 96)
	{
		putchar(number);
		number -= 1;
	}
	putchar('\n');
	return (0);
}
