#!/usr/bin/python3
""" Module for function  """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid
    O represents Water 1 land
    Args:
        grid (list): a list of list of integers representing an island.
    Returns:
        perimeter of the island described in grid
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (size * 4) - (edges * 2)
