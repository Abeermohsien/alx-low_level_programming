#include "main.h"
/**
 * read_textfile - reads a file
 * @filename: char
 * @letters: int
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int p;
ssize_t n;
char buf[BUF_SIZE * 8];
if (!filename)
	return (0);
p = open(filename, O_RDONLY);
if (p == -1)
	return (0);
n = read(p, &buf[0], letters);
n = write(STDOUT_FILENO, &buf[0], n);
close(p);
return (n);
}
