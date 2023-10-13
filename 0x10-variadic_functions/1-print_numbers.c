#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int number = va_arg(args, int);

		if (separator != NULL)
		{
			printf("%d", number);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%d", number);
		}
	}
	va_end(args);
	printf("\n");
}
