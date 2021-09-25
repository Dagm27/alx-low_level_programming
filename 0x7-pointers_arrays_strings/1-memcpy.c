#include "main.h"
/**
 * _memcpy - copies n amount of data from src to dest
 * @dest: destination variable
 * @src: source variable
 * @n: amount of bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
