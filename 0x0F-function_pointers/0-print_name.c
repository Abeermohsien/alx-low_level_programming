#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: char
 * @f: function printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
