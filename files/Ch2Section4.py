"""
NAME    :   Siddhant Pagariya
DATE    :   FEB 12 2017
GROUP   :   Advanced CS
PROG    :   Section 2.4 - "Python Code Structure"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 2.4 \"Exploring Functions in Python\" #1, 4, 7, 8\nAdvanced CS\n")

if __name__ == '__main__':
    nl(0)
# Exercise 1
def first(s):
    "Returns the first element of a given collection, s."
    return s[0]
print("first('Hello, world') = ", first('Hello, world'))
print("The documentation for the function: first, is: ", first.__doc__)

if __name__ == '__main__':
    nl(3)
# Exercise 4
# Try and find the output for print('One is better than \none' + '; two is better than one').
print("Output for the following command:\nprint('One is better than \\none' + '; two is better than one') is: ")
print('One is better than \none' + '; two is better than one')

if __name__ == '__main__':
    nl(6)
# Exercise 7
# Define a function that takes a string s and returns a new string consisting of the first and last characters in s.
def firstlast(s):
    "Returns a new string consisting of the first and last characters of the given string, s."
    return s[0]+s[-1]

# Test firstlast function.
print('The firstlast function: (Documentation) -- ' + str(firstlast.__doc__))
print('firstlast("Siddhant") = ', firstlast("Siddhant"))
print('firstlast("KAMSC") = ', firstlast("KAMSC"))

if __name__ == '__main__':
    nl(7)
# Exercise 8
# Define a function triangle(s) to output a triangle with the given one-character string, s.
def triangle(s):
    n = 5
    for i in range(n,0,-2):
        for sp in range(0, (n-i)//2):
            print(' ', end='')
        for j in range(0, i):
            print(s, end='')
        print()
    return
#Yes, we can omit the return statement to make the function void. The function will return None when it exits.

# Test triangle function.
print("triangle('s'):\n")
triangle('s')
print("\ntriangle('*'):\n")
rt = triangle('*')
print("\nThe function triangle('*') returns: ", rt)