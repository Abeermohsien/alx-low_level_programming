#include "main.h"

/*
 * swap_int  -  switch the vlues of two integars
 *
 * description - switch the vlues of two integars
 * @a: integr pointer
 * @b: integar pointer
 * **/

void swap_int(int *a, int *b)
{
int d = *a;
*a = *b;
*b = d;
}
