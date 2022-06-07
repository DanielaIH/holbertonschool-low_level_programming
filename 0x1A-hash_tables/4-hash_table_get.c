#include "hash_tables.h"


#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: is the key.
 * Return: a pointer to the newly created hash table.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while(temp->next && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return (temp->value);	
}
