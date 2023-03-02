#include <unistd.h>

/**
 * _putchar - write a charcter c to the stdio.
 * @c: The character to print
 * Return: 1 (success)
 * on err returned -1, set err numb to the screen
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


