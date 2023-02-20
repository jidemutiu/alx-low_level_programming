#include <stdio.h>

/**
 * main - Program that alphabets in lower case and exclude some alphabtes.
 * Return: 0 (Success)
 */

int main(void)
{
	char lo, e, q;

	e = 'e';
	q = 'q';

	for (lo = 'a'; lo <= 'z'; lo++)
	{
	if (lo != e && lo != q)
	putchar(lo);
	}
	putchar('\n');
	return (0);
}

