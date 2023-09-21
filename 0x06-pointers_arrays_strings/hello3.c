#include "main.h"
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
char *ptr2 = src;
while (*ptr != '\0')
{
ptr++;
dest++;
}
ptr++;
while (*ptr2 != '\0')
{
*ptr = *ptr2;
ptr++;
ptr2++;
src++;
}
        *dest = *ptr;
	return (dest);
}

