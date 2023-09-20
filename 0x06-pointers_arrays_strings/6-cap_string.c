#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int index = 0;
	int i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[index] >= 'a' && s[index] <= 'z')
		s[index] = s[index] - ('a' - 'A');
	index++;

	while (s[index] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[index] == separators[i])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
					s[index + 1] = s[index + 1] - ('a' - 'A');
				break;
			}
		}
		index++;
	}
	return (s);
}
