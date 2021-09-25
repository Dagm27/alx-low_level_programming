#include "main.h"
/**
 * _strspn - returns the num of matching characters
 * @s: array used to find matching characters
 * @accept: array used to reference the matching characters
 * Return: intiger
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int byte = 0;

	for (i = 0; accept[i]; i++)
	{
		int j;

		for (j = 0; s[j] != 32; j++)
		{
			if (s[j] == accept[i])
			{
				byte += 1;
			}
		}
	}
	return (byte);
}
