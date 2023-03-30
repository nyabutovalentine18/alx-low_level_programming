#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
*add_node - Add an element to a list 
*at the front of the list
*@head: Pointer to the pointer to the start of the list
*@str: Pointer to the string
*
* Return: Address of new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int k;

k = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
while (str[k] != '\0')
k++;
new->len = k;
new->next = *head;
*head = new;
return (*head);
}
