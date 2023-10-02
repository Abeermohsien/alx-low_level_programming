#include "main.h"
/**
 * _strstr - check the code
 * @haystack: character string
 * @needle: character string
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *ptr = haystack;
char *ptr2 = needle;
while (*ptr == *ptr2 && *ptr2 != '\0')
{
ptr++;
ptr2++;
}
if (*ptr2 == '\0')
{
return (haystack);
}
}
return ('\0');
}
