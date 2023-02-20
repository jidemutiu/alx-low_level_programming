#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Program to print number betwee 0 -10 using putchar function.
*Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
