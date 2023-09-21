#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
char *ptr2 = src;
while (*ptr != '\0')
{
	ptr++;
	dest++;
}
ptr++;
while (*ptr2 <= src[n])
{
	*ptr = *ptr2;
	ptr++;
	ptr2++;
	src++;
}
*dest = *ptr;
return (dest);
}
