#include "main.h"
/**
 * rev_string - Print a string, in reverse.
 * @s: Type char pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
