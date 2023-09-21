#include "main.h"
/**
 * rot13 - replacement for letters
 * @str: sting chaacters
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
int i, j;
char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == d[j])
{
str[i] = drot[j];
break;
}
}
}
return (str);
}
