#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: width inp
 * @height: height inp
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bts;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	bts = malloc(sizeof(int *) * height);
	if (bts == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		bts[x] = malloc(sizeof(int) * width);
		if (bts[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bts[x]);
			free(bts);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bts[x][y] = 0;
	}
	return (bts);
}
