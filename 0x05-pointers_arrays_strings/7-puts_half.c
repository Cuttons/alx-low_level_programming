#include <stdio.h>

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: Pointer to the string.
*/
void puts_half(char *str)
{
int length = 0;
int i, start_index;

/* Calculate the length of the string */
while (str[length] != '\0')
length++;

/* Calculate the starting index for printing */
start_index = (length - 1) / 2 + 1;

/* Print the second half of the string */
for (i = start_index; i < length; i++)
putchar(str[i]);

putchar('\n');
}
