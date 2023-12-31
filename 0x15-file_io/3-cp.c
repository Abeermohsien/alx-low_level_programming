#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - chech code
 * @ac: arg counter
 * @av: arg
 * Return: int
 */
int main(int ac, char **av)
{
int from = 0, to = 0;
ssize_t n;
char buf[BUF_SIZE];
if (ac != 3)
	dprintf(STDERR_FILENO, USAGE), exit(97);
from = open(av[1], O_RDONLY);
if (from == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
while ((n = read(from, buf, BUF_SIZE)) > 0)
if (write(to, buf, n) != n)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
if (n == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
from = close(from);
to = close(to);
if (from)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, from), exit(100);
if (to)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, from), exit(100);
return (EXIT_SUCCESS);
}
