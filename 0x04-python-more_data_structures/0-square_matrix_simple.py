#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    """computes the square value of all integers of a matrix."""
    if not matrix:
        return None

    return list(list(map(lambda b: b*b, num_list)) for num_list in matrix)
