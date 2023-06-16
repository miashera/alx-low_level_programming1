#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - nine
 * Return: always
 */
int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9'; d++)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
