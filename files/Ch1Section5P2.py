"""
NAME    :   Siddhant Pagariya
DATE    :   JAN 24 2017
GROUP   :   Advanced CS
PROG    :   Section 1.5 - "Exploring Functions in Python"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

# Import functions from the first part of Section 1.5 Homework.
from Ch1Section5P1 import *

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 1.5 \"Exploring Functions in Python\" #8-14\nAdvanced CS\n")

if __name__ == '__main__':
    nl(7)
# Exercise 8:
# Call double function on string '123'.
    print("Double of '123' is: ", double('123'))
# The double function actually returns a string that is doubled!

if __name__ == '__main__':
    nl(8)
# Exercise 9:
# A function to return the first character of a given string s.
def fChar(s):
    return s[0]

# Test the fChar function.
if __name__ == '__main__':
    print('First character of "KAMSC" is: \'' + str(fChar("KAMSC")) + '\'')
    print('First character of "Sid" is: \'' + str(fChar("Sid")) + '\'')

if __name__ == '__main__':
    nl(9)
# Exercise 10:
# Answer to Exercise 10.
print("When the first character function is called on a list...",
'''
List: [1, 5, 2]:
Returned: ''', fChar([1, 5, 2]))
# The first element, 1, will be returned.

if __name__ == '__main__':
    nl(10)
# Exercise 11:
# Experimentation with in-built functions like sum, min, and max.
    numList = [3, 5, 1, 2, 4, 0, 7, 6, 10, 9, 8]
    print('numList = [3, 4, 5, 1, 2, 4, 7, 6, 10, 9, 8]')
    print('sum(numList) = ', sum(numList)) # Should return 55.
    print('min(numList) = ', min(numList)) # Should return 0.
    print('max(numList) = ', max(numList)) # Should return 10.

if __name__ == '__main__':
    nl(11)
# Exercise 12:
# Experiment with min(range(n)) and max(range(n)) with n being a positive integer.
    num1 = 84
    print('num1 = 84')
    print('min(range(num1)) = ', min(range(num1))) # Should return 0 (Always 0)
    print('max(range(num1)) = ', max(range(num1))) # Should return 83 (Always n-1)

if __name__ == '__main__':
    nl(12)
# Excercise 13:
# Rewrite the function sum1ToN to fit the Exercise needs of only one plus.
def sum1ToNNew(n):
    return sum(range(n+1))

# Test the sum1ToNNew function.
if __name__ == '__main__':
    print("Sum of integers from 1 to 10 = ", sum1ToNNew(10))

if __name__ == '__main__':
    nl(13)
# Exercise 14:
# A function to return the number of digits in a positive number n.
def numDigits(n):
    cDigits = 0
    while (n > 0):
        n //= 10
        cDigits += 1
    return cDigits

# Test the numDigits function.
if __name__ == '__main__':
    print('Number of digits in 10000: ', numDigits(10000))
    print('Number of digits in 321: ', numDigits(321))