#include "lists.h"

/**
*add_nodeint_end -  a function that adds a new node
*at the end of a listint_t list
*@n: data to inser at the end of the list
*@head: pointer to the first node
*
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *temp, *head;
temp = head;
newnode = malloc(sizeof(listint_t));
if (newnode != NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next != 0)
temp = temp->next;
temp->next = newnode;
return (newnode);
}





