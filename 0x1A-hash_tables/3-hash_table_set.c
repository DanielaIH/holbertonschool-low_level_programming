#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL) /*The node is empty*/
	{
		ht->array[index] = new_node;
		return (1);
	}
	else /*The node is not empty*/
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0) /*Is the same key*/
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
/*There is a key collision*/
		temp = ht->array[index];
		new_node->next = temp;
		ht->array[index] = new_node;
		return (1);
	}
}
