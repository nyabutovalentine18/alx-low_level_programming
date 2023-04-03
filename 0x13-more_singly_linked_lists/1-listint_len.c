#include "lists.h"

/**
* listint_len - function returns the number of elements in a linked lists
* @h: type listint_t to traverse
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t k;
k = 0;
while (h != NULL)
{
k++;
h = h->next;
}
return (k);
}


