#include "main.h"

/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 */
void puts_half(char *str)
{
	int i, count, start;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		start = count / 2;
	}
	else
	{
		start = (count + 1) / 2;
	}
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
