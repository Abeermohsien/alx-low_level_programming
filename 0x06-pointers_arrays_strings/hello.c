#include <stdio.h>
#include <string.h>

int main()
{
	 int length;
	char str[] = "hello string";
	printf("%s\n", str);
	length = 0;
	length = strlen(str);
	printf("%d\n", length);
	return (0);
}
