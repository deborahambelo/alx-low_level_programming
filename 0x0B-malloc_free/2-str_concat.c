#include <stdio.h>
#include <stdlib.h>
/**
 * str_length - Computes the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int str_length(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * str_copy - Copies one string into another.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the null-terminator of the destination string.
 */
char *str_copy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string (a new allocation).
 */
char *str_concat(char *s1, char *s2)
{
	int total_length;
	char *result;
	char *start;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	total_length = str_length(s1) + str_length(s2) + 1;
	result = malloc(sizeof(char) * total_length);
	if (result == NULL)
	{
		return (NULL);
	}
	start = result;
	result = str_copy(result, s1);
	str_copy(result, s2);
	return (start);
}
