#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of a code
 * Return: 1 for success
 */
int main(void)
{
	char my_var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, my_var, sizeof(my_var) - 1);
	return (1);

}
