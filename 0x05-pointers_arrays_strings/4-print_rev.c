#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int longi = 0;
	int 0;

	while (*s != '\0')
	{
	longi++;
	s++;

	}
	s--;
	for (o = longi; o > 0; o--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
