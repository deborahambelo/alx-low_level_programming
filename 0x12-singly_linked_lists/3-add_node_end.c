#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - adds node at the add_node_end
* @head: head of the linked list
* @str: the string to be stored
* Return: the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = NULL;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while ((temp->next) != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
