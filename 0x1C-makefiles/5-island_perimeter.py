#!/usr/bin/python3

""" Island perimeter."""

def check_perimeter(grid, i, j):
    """ island perimeter helper function. """
    res:int  = 0

    if not grid[i-1][j]:
        res += 1

    if not grid[i+1][j]:
        res += 1

    if not grid[i][j+1]:
        res += 1

    if not grid[i][j -1]:
        res += 1

    return res
            
def  island_perimeter(grid):

    """ This is  the interview question. """
    res:int  = 0
    for idx, val in enumerate(grid):
        for j, vl in enumerate(val):
            if vl == 1:
                res += check_perimeter(grid, idx, j)
    return res

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
