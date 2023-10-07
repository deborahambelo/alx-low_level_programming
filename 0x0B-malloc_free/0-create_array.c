#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of char.
 * @c: type char memory value.
 * @size: type unsigned int of the memory to print.
 * Return: Null if fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
