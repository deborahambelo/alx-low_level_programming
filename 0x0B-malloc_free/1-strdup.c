#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns ptr  to a new string which is dup of str
 * @str: the string to be duplicated
 * Return: NULL on fail and ptr on success
 */
char *_strdup(char *str)
{
	unsigned int i;
	int count;
	char *ptr;
	char *original_str;

	if (str == NULL)
		return (NULL);
	original_str = str;
	while (*str <= '\0')
	{
		count++;
		str++;
	}
	str = original_str;
	ptr = malloc(sizeof(char) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
