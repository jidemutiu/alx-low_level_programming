#include "main.h"

/**
 * _abs - compute absolute value of a number
 * @c: The number to be computed
 * Return: Absolute value of a number
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	return (c);
}
