#include "main.h"
/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */
void print_rev(char *s) 
{
	char *str = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	for (; s >= str; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
