#!/usr/bin/python3
'''Jump search implemention'''
from math import sqrt


def linear_search(arr, l , u, value):
    '''returns index or None'''
    l += 1
    while l <= u:
        if arr[l] == value:
            return l
    return -1


def jump_search(arr, size, value):
    '''searches a sorted array/list with jump search algo'''
    interval = int (sqrt(size))
    lower = 0
    upper = interval -1

    while upper < size:
        if arr[upper] < value:
            lower = upper
            upper += interval
            continue
        return linear_search(arr, lower, upper, value)
    
    upper = size - 1
    if arr[upper] >= value:
        return linear_search(arr, lower, upper, value)
    return -1


print('found 6 at index {}'.format(jump_search([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 10, 6)))
print('found 1 at index {}'.format(jump_search([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 10, 1)))
print('found 999 at index {}'.format(jump_search([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 10, 999)))
