#!/usr/bin/python3

""" Island perimeter."""


def check_perimeter(grid, i, j):
    """ island perimeter helper function. """
    res: int = 0
    try:
        if i == 0 or not grid[i-1][j]:
            res += 1
    except Exception as e:
        res += 1
    try:
        if not grid[i+1][j] or i == len(grid) - 1:
            res += 1
    except Exception as e:
        res += 1

    try:
        if not grid[i][j+1] or j == len(grid[i]) - 1:
            res += 1
    except Exception as e:
        res += 1

    try:
        if not grid[i][j - 1] or j == 0:
            res += 1
    except Exception as e:
        res += 1

    return res


def island_perimeter(grid):
    """ This is  the interview question. """
    res: int = 0
    for idx, val in enumerate(grid):
        for j, vl in enumerate(val):
            if vl == 1:
                res += check_perimeter(grid, idx, j)
    return res


if __name__ == "__main__":
    grid = [
        [1, 1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1, 1],
    ]
    print(island_perimeter(grid))
