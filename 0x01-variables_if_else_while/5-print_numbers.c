#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from
 * All your code should be in the main function
 * Return: 0
 */

int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%d", number);
		number += 1;
	}
	printf("\n");
	return (0);
}
