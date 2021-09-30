#include "main.h"
/**
 * factorial - self explanatory
 * @n: intiger number
 * Return: intiger
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
