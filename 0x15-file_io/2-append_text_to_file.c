#include "main.h"
/**
 * _strlen - string length
 * @c: char
 * Return: int
 */
int _strlen(char *c)
{
int i = 0;
if (*c)
	return (0);
while (*c)
{
c++;
i++;
}
return (i);
}
/**
 * append_text_to_file - add text to file
 * @filename: char
 * @text_context: char
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p;
ssize_t n = 0, length = _strlen(text_content);
if (!filename)
	return (-1);
p = open(filename, O_WRONLY | O_APPEND);
if (p == -1)
	return (-1);
if (length)
	n = write(p, text_content, length);
close(p);
return (n == length ? 1 : -1);
}
