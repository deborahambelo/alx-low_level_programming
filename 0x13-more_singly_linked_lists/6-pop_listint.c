#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: head of a list.
 * Return: data stored in head
 */
int pop_listint(listint_t **head)
{
  int data;
  listint_t *tmp;

  if (*head == NULL) {
    return 0;
  }

  data = (*head)->n;
  tmp = (*head)->next;
  free(*head);
  *head = tmp;

  return data;
}
