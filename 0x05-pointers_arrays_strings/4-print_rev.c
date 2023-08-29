#include <stdio.h>

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: Pointer to the string.
*/
void print_rev(char *s)
{
int length = 0;

/* Calculate the length of the string */
while (*s != '\0')
{
length++;
s++;
}

/* Print the string in reverse */
while (length > 0)
{
putchar(*(s - 1));
s--;
length--;
}

putchar('\n');
}
