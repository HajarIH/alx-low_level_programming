#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while(!current)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			f = 1;
			current = current->next;
		}
	}
	printf("\n");
}
