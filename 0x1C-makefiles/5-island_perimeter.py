#!/usr/bin/python3
"""defines the function island_perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of an island"""
    width = len(grid[0])
    height = len(grid)
    S = 0
    E = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                S += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    E += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    E += 1
    return S * 4 - E * 2
