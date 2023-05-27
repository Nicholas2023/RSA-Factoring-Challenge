#!/usr/bin/python3

"""Module that factorizes as many numbers as possible
into a product of two smaller numbers."""

from sys import argv


def factorize(value):
    """Prints a simple decomposition of an integer > 1"""
    i = 2

    if value < 2:
        return
    while value % i:
        i += 1
    print("{:.0f}={:.0f}*{:.0f}".format(value, value / i, i))


if len(argv) != 2:
    exit()

try:
    with open(argv[1]) as file:
        line = file.readline()

        while line != "":
            value = int(line.rstrip('\n'))
            factorize(value)
            line = file.readline()
except IOError:
    pass
