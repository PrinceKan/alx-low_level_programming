#!/usr/bin/python3
"""
    function island_perimeter
    returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    poid_grid = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                poid_grid += 4
                if x > 0 and grid[y][x - 1]:
                    poid_grid  -= 2
                if y > 0 and grid[y - 1][x]:
                    poid_grid -= 2
    return poid_grid
