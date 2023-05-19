#include "lists.h"

/**
*free_dlistint - frees a dlistint_t list
*
*@head: pointer to the doubly linked list
*
*Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *newnode;

while (head != NULL)
{
newnode = head;
head = head->next;
free(newnode);
}
}
