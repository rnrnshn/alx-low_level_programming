#include <stdio.h>

/**
 * main -  program that prints all possible combinations of single-digit
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int number = 48;
	int combination = 44;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(combination);
			putchar(32);
		}
		number += 1;
	}
	putchar('\n');
	return (0);
}
