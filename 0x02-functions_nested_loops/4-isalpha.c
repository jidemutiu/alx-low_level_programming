#include "main.h"

/**
 * _isalpha - check for letters.
 * @c: character to be checked
 * Return: 1 for letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
