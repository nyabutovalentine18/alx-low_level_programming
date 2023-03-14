#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees a 2 dimensional grid
*@grid: parameter that frees 2D grid
*@height: parameter to be compared
*Return: nothing
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
