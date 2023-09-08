#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is %d", n, lastdigit);
	if (lastdigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (lastdigit == 0)
	{
		printf(" and is 0\n");
	}
	if (lastdigit < 6 && lastdigit != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
