#include "hash_tables.h"

/**
 * make_hash_node - create a new has node
 * @key: the key
 * @value: the value
 *
 * Return: the new node
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
        {
		free(node->key);
	       	free(node);
                return (NULL);
        }
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value:  the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *hash_n, *current;
	char *new;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
			strlen(key) == 0 || value == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[indx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new = strdup(value);
			if (new == NULL)
				return (0);
			free(current->value);
			current->value = new;
			return (1);
		}
		current = current->next;
	}
	hash_n = make_hash_node(key, value);
	if (hash_n == NULL)
		return (0);
	hash_n->next = ht->array[indx];
	ht->array[indx] = hash_n;
	return (1);
}
