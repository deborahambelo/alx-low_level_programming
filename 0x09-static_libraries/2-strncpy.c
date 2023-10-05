#include "main.h"
/**
 * *_strncpy - Function that copies a string.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (start);
}
