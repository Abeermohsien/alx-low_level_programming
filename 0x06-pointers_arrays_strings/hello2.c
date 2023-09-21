#include <stdio.h>

int main()
{
	char str[20] = "hello world";
	char *ptr = str;
	while (*ptr != '\0')
{
		printf("%c", *ptr);
	        ptr++;
}
printf("\n");
return (0);
}
