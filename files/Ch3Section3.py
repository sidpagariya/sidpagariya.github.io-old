"""
NAME    :   Siddhant Pagariya
DATE    :   FEB 15 2017
GROUP   :   Advanced CS
PROG    :   Section 3.3 - "Scope of Variables"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 3.3 \"Exploring Functions in Python\" #2, 3, 4\nAdvanced CS\n")

if __name__ == '__main__':
    nl(1)
# Exercise 2
# import math and write a new function, f, as required by the exercise.
import math
def f(x):
    return ((math.sqrt(x)+1)**2)/(x-1)

#Test the function f.
print("f(2) = ", f(2), ".")

if __name__ == '__main__':
    nl(2)
# Exercise 3
print('''The following program:
f=1
def factorial(n):
    k = 2
    while k <= n:
        f *= k # same as: f = f * k
        k += 1 # same as: k = k + 1
    return f

...does not work since the object 'f' cannot be found within the function.
The variable f does not exist in the scope of the function.''')

if __name__ == '__main__':
    nl(3)
# Exercise 4
# Comparing two programs. Neither one of them causes a syntactical error.

# Left-side program:
k = 10
def kTimes(x):
    return k * x
# Final output of the program.
print("kTimes(5), program to the left, = ", kTimes(5)) # Should yield 50 since 10 * 5 = 50 is returned.

# Right-side program
k = 10
def kTimes(x):
    k = 5
    return k * x
# Final output of the program.
print("kTimes(5), program to the right, = ", kTimes(5)) # Should yield 25 since 5 * 5 = 25 is returned.