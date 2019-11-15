#!/usr/bin/python3
""" Returns the perimeter of an Island """

def IgnisGehenalis(i, j, grid):
    count = 0

    #if j == 0 or i == 0:
     #   count += 1
    #elif i == len(grid) - 1 or j == len(grid[i]) - 1:
     #   count += 1

    if i - 1 < 0 or grid[i - 1][j] == 0:
        count += 1
    if i + 1 > len(grid) - 1 or grid[i + 1][j] == 0:
        count += 1
    if j + 1 > len(grid[i]) - 1 or grid[i][j + 1] == 0:
        count += 1
    if j - 1 < 0 or grid[i][j - 1] == 0:
        count += 1

    return count

def island_perimeter(grid):
    count = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += IgnisGehenalis(i, j, grid)

    return count
