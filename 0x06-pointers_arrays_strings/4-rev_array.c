#include "main.h"
/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	i = n;

	for (a[i] = n - 1; i > 0; i--)
	{
		_putchar(a[i]);
	}
}
