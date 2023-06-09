#include "hash_tables.h"
/**
 * new_entry - Creates a new entry and returns it
 * @key: Key to add
 * @value: Value of the key
 * Return: The address of the new node
 */
hash_node_t *new_entry(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Adds an element in the hash table
 * @ht: Pointer to the hash table
 * @key: key to add
 * @value: value of the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *entry = NULL;

if (!ht || !key)
return (0);

index = key_index((const unsigned char *)key, ht->size);

if (ht->array[index] == NULL)
{
ht->array[index] = new_entry(key, value);
return (1);
}

entry = ht->array[index];

while (entry != NULL)
{
if (strcmp(entry->key, key) == 0)
{
free(entry->value);
entry->value = strdup(value);
return (1);
}

entry = entry->next;
}

entry = ht->array[index];
ht->array[index] = new_entry(key, value);
ht->array[index]->next = entry;

return (1);
}
