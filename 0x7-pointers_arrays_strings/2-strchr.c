#include <stddef.h>
#include "main.h"
/**
 * _strchr - fur
 * @s: djlk
 * @c: kljsa
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	char *null = NULL;

	for (i = 0; s[i]; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == 0)
	{
		return (0);
	}
	else
	{
		return (null);

