#include "lists.h"

/**
*dlistint_len - counts the number of elements in the doubly linked list
*
*@h: pointer to the doubly linked list
*
*Return: Number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{

int len = 0;

while (h != NULL)
{
++len;
h = h->next;
}
return (len);
}
