#include "hash_tables.h"


#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table.
 * Return: a pointer to the newly created hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *separator = "";
	hash_node_t *node;

	if (ht == NULL)
		return;

	node = malloc(sizeof(hash_node_t));
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", separator, node->key, node->value);
			separator = ", ";
			if (node->next == NULL)
				separator = "";
			node = node->next;
		}
	}
	printf("}\n");
}
