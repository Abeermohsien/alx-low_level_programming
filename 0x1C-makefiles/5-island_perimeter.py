#!/usr/bin/python3
"""perimeter"""


def island_perimeter(grid):
    """return perimiter"""
    width = len(grid[0])
    height = len(grid)
    sides = 0
    size = 0

    for n in range(height):
        for m in range(width):
            if grid[n][m] == 1:
                size += 1
                if (m > 0 and grid[n][m - 1] == 1):
                    sides += 1
                if (n > 0 and grid[n - 1][m] == 1):
                    sides += 1
    return size * 4 - sides * 2
