#include "stdio.h"
#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list.
 * Return: returns the number ofelements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
