#include "lists.h"
#include <stdio.h>
/**
 * _strlen - string count
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
int n = 0;
while (*str)
{
n++;
str++;
}
return (n);
}
/**
 * print_list - print lisdt element
 * @h: pointer
 * Return: int
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%d] %s\n", _strlen(h->str), h->str);
}
h = h->next;
n++;
}
return (n);
}
