#include "hash_tables.h"
/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *del = NULL;
hash_node_t *pr = NULL;

if (!ht)
return;

for (; i < ht->size; i++)
{
del = ht->array[i];

while (del != NULL)
{
pr = del;
pr = pr->next;
free(pr->key);
free(pr->value);
free(pr);
}
}

free(ht->array);
free(ht);
}
