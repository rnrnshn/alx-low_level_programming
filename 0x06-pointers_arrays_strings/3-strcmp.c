#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (s1 != s2)
		r = *s1 - *s2;

	return (r);
}
