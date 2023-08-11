#include <string.h>
#include <unistd.h>
/**
 * main - It's a program that prints a line to the standard error
 * Return: 1
 */
int main(void)
{
        char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
        write(2, text, strlen(text));
        return (1);
}
