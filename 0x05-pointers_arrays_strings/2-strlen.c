#include "main.h"
#include <stdio.h>
/**
  *_strlen - length of a string
  *@s: string to be counted
  *Return: none
  */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
