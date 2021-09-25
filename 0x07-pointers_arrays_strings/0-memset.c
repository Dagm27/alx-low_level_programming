#include "main.h"

/**
 * _memset - fills the first n char of s with b
 * @s: pointer variable
 * @b: character that is used for replacing
 * @n: intiger used to indicate number of first elements to be replaced
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
