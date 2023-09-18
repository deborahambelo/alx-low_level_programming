#include "main.h"
/**
 * rev_string - Print a string, in reverse.
 * @s: Type char pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
