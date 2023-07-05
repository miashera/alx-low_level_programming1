#include "main.h"
/**
 * factorial - calc
 * @n: num
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
