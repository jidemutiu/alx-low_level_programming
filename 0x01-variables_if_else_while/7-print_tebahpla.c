#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program tha print alphabets in reverse order.
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');
	return (0);
}
