#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number += 1;
	}
	putchar('\n');
	return (0);
}
