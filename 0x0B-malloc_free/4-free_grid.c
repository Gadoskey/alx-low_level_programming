#include "main.h"
/**
 * free_grid - prints an array of characters
 * @grid: the character to print
 * @height: the size
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
