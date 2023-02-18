#include <stdio.h>
#include <unixstdio.h>
/**
 * main - A program that print  line without using puts and printf functions.
 The program add a newline.
 * Return 1 (success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
