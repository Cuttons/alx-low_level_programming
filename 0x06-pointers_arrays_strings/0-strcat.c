#include <stdio.h>

/**
* _strcat - Concatenates the src string to the dest string.
* @dest: The destination string.
* @src: The source string.
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, const char *src)
{
int destLength = 0;
int i = 0;

/* Find the length of the dest string */
while (dest[destLength] != '\0')
{
destLength++;
}

/* Copy the characters from src to dest */
while (src[i] != '\0')
{
dest[destLength] = src[i];
destLength++;
i++;
}

dest[destLength] = '\0'; /* Add the terminating null byte to the string */
return (dest); /* Return the pointer to the resulting string dest */
}

/**
* main - Entry point of the program. Concatenates 2 strings and prints d result
*
* Return: Always 0.
*/
int main(void)
{
char dest[100] = "Hello, ";
const char src[] = "world!";

_strcat(dest, src);
printf("Concatenated string: %s\n", dest);

return (0);
}
