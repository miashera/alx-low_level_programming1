#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdou
 * @c:Ther character to pri
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
