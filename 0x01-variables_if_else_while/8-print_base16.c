#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int number = 48;
	int letter = 'a';

	while (number <= 57)
	{
		putchar(number);
		number += 1;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
