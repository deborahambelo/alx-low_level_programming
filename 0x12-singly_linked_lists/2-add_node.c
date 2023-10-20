#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds node at beginning of a list
 * @str: the string
 * @head: the head od the list
 * Return: the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = NULL;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		return (NULL);
	}
	newhead->str = strdup(str);
	if (str == NULL)
	{
		free(newhead);
		return (NULL);
	}
	newhead->len = strlen(str);
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
