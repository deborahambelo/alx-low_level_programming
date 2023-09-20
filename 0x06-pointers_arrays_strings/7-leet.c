#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *str)
{
    char *leet_table = "aAeEoOtTlL";
    char *leet_replacements = "4433007711";

    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leet_table[j] != '\0'; j++)
        {
            if (str[i] == leet_table[j])
            {
                str[i] = leet_replacements[j];
                break;
            }
        }
    }

    return str;
}
