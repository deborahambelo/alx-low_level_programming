#include "main.h"
/**
 * reverse_array - Function that reverse the content of an array of int
 * @a: Type int
 * @n: Type int
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{

	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = temp;
	}
}
