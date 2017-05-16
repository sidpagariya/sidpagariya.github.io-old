"""
NAME    :   Siddhant Pagariya
DATE    :   FEB 07 2017
GROUP   :   Advanced CS
PROG    :   Section 2.3 - "Python Interpreter"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 2.3 \"Exploring Functions in Python\" #2-9\nAdvanced CS\n")


if __name__ == '__main__':
    nl(1)
# Exercise 2:
# Trying 2+-2.
    print("2+-2 = ", 2+-2) # Yields 0 since we add 2 and -2.
# Trying 2+-2.
    print("2++2 = ", 2++2) # Yields 2 since we add 2 and 2.

if __name__ == '__main__':
    nl(2)
# Exercise 2:
# Trying 2+++2.
    print("2+++2 = ", 2+++2) # Yields 4 since we add 2 and 2.

if __name__ == '__main__':
    nl(3)
# Exercise 4:
# Trying 2**3.
    print("2**3 = ", 2**3) # Yields 8 since 2 to the 3rd power = 8.
# Trying 2**4.
    print("2**4 = ", 2**4) # Yields 16 since 2 to the 4th power = 16.

if __name__ == '__main__':
    nl(4)
# Exercise 5:
# Trying "abc" + "def".
    print('"abc" + "def" yields: ', "abc" + "def") # Yields a concatenated string "abcdef".
# Trying "abc" + "def".
    print("'abc' + 'def' yields: ", 'abc' + 'def') # Yields a concatenated string 'abcdef'.

if __name__ == '__main__':
    nl(5)
# Exercise 6:
# Trying 3 * '12'.
    print("3 * '12' yeilds: ", 3 * '12') # Yields '121212' since the '12' string is multiplied three times

if __name__ == '__main__':
    nl(6)
# Exercise 7:
# Trying 9-8*2+6.
    # Yields -1 since the multiplication is done first, then the subtraction and addition from left to right.
    print("9-8*2+6 = ", 9-8*2+6)

# Trying (5-1)*(1+2)**3.
    # Yields 108 since the the paranthetical operations are done first, then the power, then multiplication.
    print("(5-1)*(1+2)**3 = ", (5-1)*(1+2)**3)

if __name__ == '__main__':
    nl(7)
# Exercise 8:
# Removing redundant paratheses from (x-2)**3 + (3*x).
    x = 10
    print("(x-2)**3 + (3*x) = ", (x-2)**3 + (3*x))
    print("(x-2)**3 + 3*x = ", (x-2)**3 + 3*x)

if __name__ == '__main__':
    nl(8)
# Exercise 9:
#define reciprocal function.
def reciprocal(x):
    return 1/x

#Trying 1 + reciprocal(2*5).
if __name__ == '__main__':
    print("1 + reciprocal(2*5) = ", 1 + reciprocal(2*5)) # Yields 1.1: reciprocal of 2*5, 10, is 0.1 and 1 + 0.1 = 1.1.