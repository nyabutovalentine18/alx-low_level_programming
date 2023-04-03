#include "lists.h"

/**
*free_listint -  frees a listint_t list.
*@head: Pointer to the first node
*
*Return: void
*/

void free_listint(listint_t *head)
{
listint_t *temporary;
while (head != NULL)
{
temporary = head->next;
free(head);
head = temporary;
}
}

