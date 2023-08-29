#include <stdio.h>

/**
* _atoi - Converts a string to an integer.
* @s: Pointer to the string.
*
* Return: The converted integer, or 0 if no number is found.
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
result = result * 10 + (s[i] - '0');
else if (result != 0)
break;

i++;
}

return (sign *result);
}
