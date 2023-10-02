#include "main.h"
#include <string.h>

/**
 * _strlen - count string length
 * @s: charcter pointer
 * Return:n if correct.
 */

int _strlen(char *s)
{
int n;
n = 0;
while (*s != '\0')
{
n++;
s++;
}
return (n);
}
