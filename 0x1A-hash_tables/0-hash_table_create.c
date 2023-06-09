#include "hash_tables.h"

/**
*hash_table_create - a function that creates a hash table
*@size: size of array
*
*Return: NULL if something went wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashtable = NULL;
unsigned long int i;

hashtable = malloc(sizeof(hash_table_t));
if (hashtable == NULL)
return (NULL);

hashtable->size = size;
hashtable->array = malloc(sizeof(hash_node_t *) * hashtable->size);
if (hashtable->array == NULL)
return (NULL);

for (i = 0; i < size; i++)
hashtable->array[i] = NULL;

return (hashtable);
}
