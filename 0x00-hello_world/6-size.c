/**
 * main - Entry point
 *
 * Description: This program prints the size of various types
 * Return:  Always 0 (Success)
 *
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned int long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned int long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",
	       (unsigned int long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",
	       (unsigned int long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned int long)sizeof(float));
	return (0);
}
