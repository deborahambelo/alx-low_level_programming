#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}
	return (len);
}

