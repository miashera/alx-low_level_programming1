#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry
 * @mini: minimum value
 * @maxi: maximum value
 * Return: int value
 */
int *array_range(int mini, int maxi)
{
	int *a, i = 0;

	if (mini > maxi)
		return (NULL);
	a = malloc((sizeof(int) * (maxi - mini)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (mini <= maxi)
	{
		a[i] = mini;
		i++;
		mini++;
	}
	return (a);
}
