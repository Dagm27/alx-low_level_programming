#include "main.h"
/**
 * sq_root - takes two param to check if given num has natural sqrt
 * @n: given int
 * @root: possible root
 * Return: -1 if no possible root, or its natural square root
 */

int sq_root(int n, int root)
{
	if (n == root * root)
	{
		return (root);
	}
	if (n < root * root)
	{
		return (-1);
	}
	return (sq_root(n, ++root));
}

/**
 * _sqrt_recursion - return square root
 * @n: given int
 * Return: -1 if n < 0
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq_root(n, 0));
}
