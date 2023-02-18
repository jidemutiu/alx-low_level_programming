#include <stdio.h>
/**
 * main - A program that print data types in computer
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	int b;

	long int c;

	long long int d;

	float f;

	printf("size of char is %li byte(s)\n", sizeof(a));
	printf("size of int is %li byte(s)\n", sizeof(b));
	printf("size of long int is %li byte(s)\n", sizeof(c));
	printf("size of long long int is %li byte(s)\n", sizeof(d));
	printf("size of float is %li byte(s)\n", sizeof(f));
	return (0);
}
