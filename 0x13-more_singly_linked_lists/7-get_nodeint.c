#include "lists.h"

/**
**get_nodeint_at_index - returns the nth node of a listint_t linked list
*
*@head: pointer to the first node
*
*@index: index of the node, starting at 0
*Return: pointer node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j;
j = 0;
listint_t *temp;
temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
