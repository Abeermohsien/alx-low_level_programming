#include "main.h"
/**
 * _strlen - string length
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
	return (0);
while (*s)
{
s++;
i++;
}
return (i);
}
/**
 * create_file - creates file
 * @filename: char
 * @text_content: cfar
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
int ptr;
ssize_t n = 0, length = _strlen(text_content);
if (!filename)
	return (-1);
ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (ptr == -1)
	return (-1);
if (length)
	n = write(ptr, text_content, length);
close(ptr);
return (1);
}
