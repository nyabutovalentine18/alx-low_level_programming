#include "lists.h"

/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*
*@head: pointer t the doubly linked list
*@n: position of insertion
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode, *temp = NULL;
newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
newnode->prev = NULL;
return (newnode);
}

temp = (*head);

while (temp->next != NULL)
temp = temp->next;

temp->next = newnode;
newnode->prev = temp;

return (newnode);
}


