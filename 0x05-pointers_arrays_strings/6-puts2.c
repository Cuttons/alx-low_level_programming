#include <stdio.h>

/**
* puts2 - Print every other character of a string, starting with the first char
* @str: Pointer to the string.
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
putchar(str[i]);
i++;
}

putchar('\n');
}
