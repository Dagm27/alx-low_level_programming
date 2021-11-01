#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - ....
  *@b: ...
  *
  *Return: pointer to new space
  */
void *malloc_checked(unsigned int b)
{
	int i = 98, *n = &i, *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(*n);
	}
	return (ptr);
}
