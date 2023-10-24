#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a list.
 * @index: index of the list
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *delnode;

	tmp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL || (tmp->next == NULL && index != 0))
	{
		return (-1);
	}

	delnode = tmp->next;

	if (index != 0)
	{
		tmp->next = delnode->next;
		free(delnode);
	}
	else
	{
		free(tmp);
		*head = delnode;
	}

	return (1);
}
