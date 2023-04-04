#include "lists.h"

/**
**insert_nodeint_at_index - inserts a new node at a given position
*
*@head: pointer to the first node
*@idx: index of the list where the new node should be added
*@n: insertion data
*
*Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *newnode, *temp;
temp = *head;
newnode = malloc(sizeof(listint_t));
if (!newnode || !head)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}

for (j = 0; temp && j < idx; j++)
{
if (j == idx - 1)
{
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
else
temp = temp->next;
}

return (NULL);
}
