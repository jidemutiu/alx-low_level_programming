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

	printf("size of a char is %li byte(s)\n", sizeof(a));
	printf("size of an int is %li byte(s)\n", sizeof(b));
	printf("size of a long int is %li byte(s)\n", sizeof(c));
	printf("size of a long long int is %li byte(s)\n", sizeof(d));
	printf("size of a float is %li byte(s)\n", sizeof(f));
	return (0);
}
