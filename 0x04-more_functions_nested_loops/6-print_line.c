#include "main.h"

/**
 * print_line - Draw a straight line to the stdout.
 * @n: number of lines to draw
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x <= n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
