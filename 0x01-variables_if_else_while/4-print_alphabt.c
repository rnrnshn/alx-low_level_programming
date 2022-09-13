#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			lower += 1;
		}
		else
		{
			putchar(lower);
			lower += 1;
		}
	}
	putchar('\n');
	return (0);
}
