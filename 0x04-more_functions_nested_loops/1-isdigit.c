#include "main.h"

/**
 *  _isdigit - check for digits from 0 through 9
 *  @c:number to check
 *  Return: 1 for success and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
