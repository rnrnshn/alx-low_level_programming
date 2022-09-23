#include "main.h"
#include <string.h>

/**
 * _strncat -  concatenates two strings.
 * @src: string to copy
 * @dest: string to concatenate
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[i + a] = *src;
		src++;
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
