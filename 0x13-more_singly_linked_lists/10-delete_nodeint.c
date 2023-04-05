#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index index
*@head: pointer to first node
*@index: index of the node that should be deleted
*
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *next;
unsigned int m;
if (head == NULL || *head == NULL)
{
return (-1);
temp = (*head);
}
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
temp = *head;
for (m = 0; index - 1; m++)
{
if (temp->next == NULL)
return (-1);
temp = temp->next;
}
next = temp->next;
temp->next = next->next;
free(next);
return (1);
}

