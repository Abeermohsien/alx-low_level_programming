#include "hash_tables.h"
/**
 * make_node - creates node
 * @key: key
 * @val: value
 * Return: new node
 */
hash_node_t *make_node(const char *key, const char *val)
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
	node->value = strdup(val);
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
 * hash_table_set - sets key and value
 * @ht: hasj
 * @key: key
 * @value: data to store
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *tmp;
	char *val;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			val = strdup(value);
			if (val == NULL)
				return (0);
			free(tmp->value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->next;
	}
	node = make_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
