#include <string.h>
#include <stdio.h>                              #include <stdlib.h>

/**
 * main - Generates
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passw[7], *cod;
	int len = strlen(argv[1]), i, tmp;

	cod = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	passw[0] = cod[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	passw[1] = cod[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	passw[2] = cod[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	passw[3] = cod[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	passw[4] = cod[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	passw[5] = cod[(tmp ^ 229) & 63];

	passw[6] = '\0';
	printf("%s", passw);
	return (0);
}
