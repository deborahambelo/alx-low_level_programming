#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
