#!/usr/bin/python3
'''
This module has a function that returns the perimeter
of an island provided by a grid.
'''

def get_cell_perimeter(grid, row, col):
    '''Returns the part of a lan cell that makes a perimeter.

    Part of perimeter:
    # if the cell to the left is water, left-border is perimeter
    # if the cell at the top is water top-border is perimeter
    # if the cell to the right is water, right-border is perimeter
    # if cell at the bottom is water botto-border is perimeter
    '''
    perimeter = 0

    if col == 0 or  grid[row][col-1]:
        perimeter += 1

    if row == 0 or grid[row - 1][col] == 0:
        perimeter += 1

    if col == len(grid[row]) - 1 or grid[row][col + 1] == 0:
        perimeter += 1

    if row == len(grid) - 1 or grid[row + 1][col] == 0:
        perimeter += 1

    return perimeter


def get_row_perimeter(grid: list, row: int) -> int:
    '''It gets the perimeter of the landof the row.'''
    perimeter = 0
    col = 0

    while col < len(grid[row]):
        if grid[row][col] == 1:
            perimeter += get_cell_perimeter(grid, row, col)
        col += 1
    return perimeter


def island_perimeter(grid: list) -> int:
    '''Find perimeter of the island given the grid.
    '''
    perimeter = 0
    row = 0

    # for each row in the grid get the part of the land cells
    # that make a perimeter
    while row < len(grid):
        perimeter += get_row_perimeter(grid, row)
        row += 1
    return perimeter


# def island_perimeter(grid):
#     """ Calculate perimeter of grid where "1" is found"""
#     p = 0
#     for row in range(len(grid)):
#         for col in range(len(grid[0])):
#             if grid[row][col] == 1:
#                 if row == 0 or grid[row - 1][col] == 0:
#                     p += 1  # top
#                 if row == (len(grid) - 1) or grid[row + 1][col] == 0:
#                     p += 1  # bottom
#                 if col == 0 or grid[row][col - 1] == 0:
#                     p += 1  # left
#                 if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
#                     p += 1  # right
#     return p