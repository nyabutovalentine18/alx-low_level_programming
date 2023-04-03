#include "lists.h"

/**
* print_listint - function prints all the elements of a linked list
* @h: type listint_t to print
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t k;
k = 0;
while (h != NULL)
{
printf("%d\n", h->n);
k++;
h = h->next;
}
return (k);
}
