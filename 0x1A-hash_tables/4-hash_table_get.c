#include "hash_tables.h"
/**
 * hash_table_get - get table hash
 * @ht: hash
 * @key: find value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *t;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);
	if (key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	t = ht->array[i];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}
	return (NULL);
}
