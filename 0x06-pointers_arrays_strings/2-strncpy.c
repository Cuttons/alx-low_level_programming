#include "main.h"

/**
 * _strncpy - A Function copy of a string
 * @dest: Destination string point
 * @src: Source string point
 * @n: Input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
