#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		count++;
	}
	return (count);
}

