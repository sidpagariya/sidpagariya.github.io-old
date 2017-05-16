"""
NAME    :   Siddhant Pagariya
DATE    :   FEB 15 2017
GROUP   :   Advanced CS
PROG    :   Section 3.5 - "Functions Arguments"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 3.5 \"Functions Arguments\" #1-6\nAdvanced CS\n")

if __name__ == '__main__':
    nl(0)
# Exercise 1:
def mystery(x, y):
    return x // y # Does integer division -- returns an integer.
# Test mystery function
print("mystery(1, 3) = ", mystery(1, 3))
print("mystery(4, 2) = ", mystery(4, 2))
print("mystery(4.1, 1.9) = ", mystery(4.1, 1.9))

if __name__ == '__main__':
    nl(1)
# Exercise 2:
def mystery(x, y):
    return x / y # Does float division -- returns a decimal.
print("mystery(1, 3) = ", mystery(1, 3))
print("mystery(4, 2) = ", mystery(4, 2))
print("mystery(4.1, 1.9) = ", mystery(4.1, 1.9))

if __name__ == '__main__':
    nl(2)
# Exercise 3:
def aMean(a, b):
    return (a+b)/2
# Test the arithmetic mean function
print("Mean of 1 and 3: ", aMean(1, 3))
print("Mean of 1 and 2: ", aMean(1, 2))
print("Mean of 1 and 1: ", aMean(1, 1))

if __name__ == '__main__':
    nl(3)
# Exercise 4:
def swap(x, y):
    temp = x; x = y; y = temp
a = 1
b = 2
print("Before swap: a = ", a, " and b = ", b)
swap(a, b)
print("After swap: a = ", a, " and b = ", b)
# The numbers aren't swapped since the arguments passed aren't the actual numbers a and b, but just their values.

if __name__ == '__main__':
    nl(4)
# Exercise 5:
def swap(pair):
    temp = pair[0]; pair[0] = pair[1]; pair[0] = temp
pair = [1, 2]
print("Pair: ", pair)
swap(pair)
print("After swap, pair: ", pair) # Isn't swapped since only thr value of pair is passed, not the object itself.

if __name__ == '__main__':
    nl(5)
# Exercise 6:
def swap(pair):
    return [pair[1], pair[0]]
pair = [1, 2]
print("Pair: ", pair)
print("swap(pair): ", swap(pair))
print("After swap, pair: ", pair) # The value returned from swap of pair isn't set back into the actual object.