#include "main.h"
/**
  *_islower - checks for lower case
  *@c: accepts char
  *
  *Return: 1 if c id lower case and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
