#!/usr/bin/python3
def island_perimeter(grid):
    if len(grid) = 0:
        return 0

    zeros = 0
    ones = 0
    perimeter = 0
    cells = len(grid) * len(grid)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                ones += 1
            else:
                zeros += 1

    perimeter = ((cells + ones) - zeros) + 2

    return perimeter
