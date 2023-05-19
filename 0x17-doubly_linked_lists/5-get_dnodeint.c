#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node
*of a double linked list
*
*@head: pointer to the doubly linked list
*@index: the index of the node, starting from 0
*Return: NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = NULL;
unsigned int i = 0;

if (head == NULL)
return (NULL);

temp  = head;

while (i < index)
{
temp = temp->next;
++i;
if (temp == NULL)
return (NULL);
}
return (temp);
}



