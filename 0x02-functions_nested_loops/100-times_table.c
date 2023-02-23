#include "main.h"

/**
 * print_times_table - compute multiplication table.
 * @n: The number to compute
 * Return: 0 Always
 */

void print_times_table(int n)
{
	int num, mul, pro;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mul = 1; num <= n; mul++)
	{
	_putchar(',');
	_putchar(' ');
	pro = num * mul;
	if (pro <= 99)
	_putchar(' ');
	if (pro <= 9)
	_putchar(' ');
	if (pro >= 100)
	{
	_putchar((pro / 100) + '0');
	_putchar(((pro / 10)) % 10 + '0');
	}
	else if (pro <= 99 && pro >= 10)
	{
	_putchar((pro / 10) + '0');
	}
	_putchar((pro % 10) + '0');
	}
	_putchar('\n');
	}
	}
}


