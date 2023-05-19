#include "lists.h"

/**
*insert_dnodeint_at_index - inserts a new node at a given position
*
*@h: pointer to the doubly linked list
*@idx: index of the list where the new node should be addded
*@n: none to be inserted
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *temp, *newnode = NULL;
unsigned int i = 0;

newnode = malloc(sizeof(dlistint_t));
temp = *h;

if (h == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (idx == 0)
return (add_dnodeint(h, n));

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
if (temp->next == NULL)
return (add_dnodeint_end(h, n));

newnode->next = temp->next;
newnode->prev = temp;
temp->next->prev = newnode;
temp->next = newnode;
return (newnode);
}
else
temp = temp->next;
}

return (NULL);
}
