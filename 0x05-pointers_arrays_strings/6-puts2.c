#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: type char pointer
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		i++;
	}
	_putchar('\n');
}
