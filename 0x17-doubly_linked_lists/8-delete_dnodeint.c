#include "lists.h"
/**
  * dlistint_len - returns number of elements in doubly linked list.
  * @h: ponter to head node of list.
  *
  * Return: number of elements in list.
  */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

/**
*delete_dnodeint_at_index - deletes the node at index index
*of a dlistint_t linked list
*
*@head: pointer to the doubly linked list
*@index: index of the node that should be deleted
*
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int idx = 0;

temp = *head;
if (*head == NULL || index > dlistint_len(temp))
return (-1);
if (index == 0 && temp->next)
{
temp->next->prev = NULL;
*head = temp->next;
free(temp);
return (1);
}
else if (index == 0 && temp)
{
free(temp);
*head = NULL;
return (1);
}
while (idx < index)
{
temp = temp->next;
idx++;
}
temp->prev->next = temp->next;
if (temp->next)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
