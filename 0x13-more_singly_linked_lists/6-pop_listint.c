#include "lists.h"

/**
* pop_listint -  deletes the head node of a listint_t linked list
*
*@head: pointer to the first node
*
*Return: head node’s data (n)
*/

int pop_listint(listint_t **head)
{
listint_t *tempo;
int j;
if (!head || !*head)
return (0);

j = (*head)->n;
tempo = (*head)->next;
free(*head);
*head = tempo;

return (j);
}

