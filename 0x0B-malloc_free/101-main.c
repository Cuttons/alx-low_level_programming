#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str);

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - Entry point of the program
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
    int i, j, words = 0, index = 0;
    char **result;

    /* Check for invalid input */
    if (str == NULL || *str == '\0')
        return (NULL);

    /* Calculate the number of words in the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            words++;
    }

    /* Allocate memory for the array of strings */
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return (NULL);

    /* Extract the words from the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            int start = i;
            int length = 0;
            while (str[i] != ' ' && str[i] != '\0')
            {
                i++;
                length++;
            }

            /* Allocate memory for each word */
            result[index] = (char *)malloc((length + 1) * sizeof(char));
            if (result[index] == NULL)
            {
                /* Free previously allocated memory and return NULL on failure */
                for (j = 0; j < index; j++)
                    free(result[j]);
                free(result);
                return (NULL);
            }

            /* Copy the word into the allocated memory */
            for (j = 0; j < length; j++)
                result[index][j] = str[start + j];
            result[index][length] = '\0';

            index++;
        }
    }

    result[index] = NULL; /* Set the last element to NULL */

    return (result);
}
/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
(
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
