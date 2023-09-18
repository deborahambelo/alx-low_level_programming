#include "main.h"
/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, count, tmp;

	count = 0;

	while (*str != '\0')

	{
		count++;
		str++;
	}
	tmp = count;

	if (tmp % 2 == 0)

	{
		for (i = tmp / 2; i < tmp; i++)
		{
			_putchar(*(str - tmp + i));
		}
	}
	else if (tmp % 2 != 0)
	{
		for (i = (tmp - 1) / 2; i < tmp; i++)
		{
			_putchar(*(str - tmp + i));
		}
	}
	_putchar('\n');
}
