#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
