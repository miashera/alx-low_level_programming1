#include "main.h"
/**
 * _islower - lowercase char
 * @c: char checked
 * Return: 1 lowercase char or 0 anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
