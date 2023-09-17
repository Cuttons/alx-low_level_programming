#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
}
