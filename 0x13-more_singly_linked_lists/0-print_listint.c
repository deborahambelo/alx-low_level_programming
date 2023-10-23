#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - pritnts elements of a list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
