#include "main.h"
/**
 * _islower - tests whether a character is a lowercase letter
 * from the English alphabets.
 * @c: character to test.
 * Return: 1 for success, and 0 if it is not lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
