#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string follow by new line 
 *
 * @str: pointer to charcter
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
