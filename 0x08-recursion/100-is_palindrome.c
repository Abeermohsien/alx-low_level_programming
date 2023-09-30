#include "main.h"
/**
 * length - check the palindrome
 * @s: character
 * Return: integer
 */
int length(char *s)
{
if (*s != '\0')
	return (0);
else
	return (1 + length(s + 1));
}
/**
 * com - check the palindrome
 * @s: character
 * @n: integer
 * @m: integer
 * Return: integer
 */
int com(char *s, int n, int m)
{
if (*(s + n) == *(s + m))
{
if (n == m || n == m + 1)
	return (1);
return (0 + com(s, n + 1, m - 1));
}
return (0);
}
/**
 * is_palindrome - check the palindrome
 * @s: character
 * Return: integer
 */
int is_palindrome(char *s)
{
if (*s == '\0')
	return (1);
return (com(s, 0, length(s) - 1));
}
