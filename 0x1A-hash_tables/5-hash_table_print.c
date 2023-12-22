#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *t;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		t = ht->array[n];
		while (t != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			f = 1;
			t = t->next;
		}
	}
	printf("}\n");
}
