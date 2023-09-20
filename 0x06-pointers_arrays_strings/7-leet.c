#include "main.h"

/**
 * leet - replace letters with words
 * @c: string characters
 * Return: Always 0.
 */
char *leet(char *c)
{
unsigned int i;
char *cp = c;
char letter[] = {'A', 'E', 'O', 'T', 'L'};
int n[] = {4, 3, 0, 7, 1};
while (*c)
{
for (i = 0; i < sizeof(letter) / sizeof(char); i++)
{
if (*c == letter[i] || *c == letter[i] + 32)
	*c = 48 + n[i];
}
c++;
}
return (cp);
}
