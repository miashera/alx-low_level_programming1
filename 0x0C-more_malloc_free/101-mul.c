#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
int main(int argc, char *argv[]);
/**
 * find_len - length ofstring
 * @str: string
 * Return: success
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * create_xarray - creates array
 * @size: ,,,
 * Description: ....
 * Return: success
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}
/**
 * iterate_zeroes - entry
 * @str: string
 * Return: succes
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
/**
 * get_prod - ent point
 * @prod: ....
 * @mult: ....
 * @digit: ,,,,
 * @zeroes: ....
 * Description: mult contains a non value the function exitswith status val of 98
 * Return: nothing
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;
	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}
/**
 * add_nums - entry
 * @final_prod: buffer storing
 * @next_prod: next product
 * @next_len:legth of next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod -'0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens =num / 10;
		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}
/**
 * main - mults two +ve numbers
 * @argv: num of arguments
 * @argc: array pointers
 * Description: num of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);

	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);
	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index];index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
