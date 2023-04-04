#include "lists.h"

/**
*sum_listint - returns the sum of all the data (n)
*
*@head: pointer to the first node
*
*Return: 0 if list is empty
*/

int sum_listint(listint_t *head)
{
int add = 0;
listint_t *temp;
temp = head;
while (temp)
{
add += temp->n;
temp = temp->next;
}

return (add);
}

