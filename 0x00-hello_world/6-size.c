#include <stdio.h>
/**
 * main - Prints out the size of various types on the computer compiled on.
 *
 * Return: 0 on success.
 *
 */
int main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int l = sizeof(long int);
	int ll = sizeof(long long int);
	int f = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", c);
	printf("Size of an int: %lu byte(s)\n", i);
	printf("Size of a long int: %lu byte(s)\n", l);
	printf("Size of a long long int: %lu byte(s)\n", ll);
	printf("Size of a float: %lu byte(s)\n", f);
	return (0);
}
