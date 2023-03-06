#include "main.h"

/**
 * *_memset - fills the memory with constant byte
 * @s: pointer to destination
 * @b: constant byte
 * @n: bytes to be filled
 * Return: Always 0 (successful)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
