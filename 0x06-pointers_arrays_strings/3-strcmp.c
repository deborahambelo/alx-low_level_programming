#include "main.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1: type str
 * @s2: type str
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		int asc1 = (int)(s1[i]);
		int asc2 = (int)(s2[i]);

		if (asc1 > asc2)
		{
			return (15);
		}
		else if (asc1 < asc2)
		{
			return (-15);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
