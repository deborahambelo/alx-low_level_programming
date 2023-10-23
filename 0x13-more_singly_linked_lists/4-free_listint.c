#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
void free_listint(listint_t *head){

  listint_t *tmp;

  while (head != NULL) {
    tmp = head->next;
    free(head);
    head = tmp;
  }
}
