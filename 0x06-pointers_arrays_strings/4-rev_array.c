#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: an aray
 * @n: number of element in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
