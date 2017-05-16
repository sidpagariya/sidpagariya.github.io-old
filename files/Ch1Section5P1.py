"""
NAME    :   Siddhant Pagariya
DATE    :   JAN 24 2017
GROUP   :   Advanced CS
PROG    :   Section 1.5 - "Exploring Functions in Python"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

# Signature Print from a custom created class.
from customStart import signature
if __name__ == '__main__':
    signature("Section 1.5 \"Exploring Functions in Python\"")

def nl(n):
    print("\n____Exercise " + str(n + 1) + "____")

if __name__ == '__main__':
    nl(0)
# Exercise 1:
# A function to return the remainder of a number after dividing it by 3.
def mod3(n):
    return n % 3

# Test mod3() function.
if __name__ == '__main__':
    print ("7 mod by 3 = ", mod3(7))

if __name__ == '__main__':
    nl(1)
# Exercise 2:
# A function to increment the passed argument by 1
def incrementByOne(x):
    return x + 1

# Test incrementByOne function.
if __name__ == '__main__':
    print ("Increment 3 by 1 = ", incrementByOne(3))
    print ("Increment -5 by 1 = ", incrementByOne(-5))
    print ("Increment 1.5 by 1 = ", incrementByOne(1.5))

if __name__ == '__main__':
    nl(2)
# Exercise 3:
    print ("Absolute value of -1139 = ", abs(-1139))
    print ("Absolute value of 1139 = ", abs(1139))

if __name__ == '__main__':
    nl(3)
# Exercise 4:
# A function to add all the numbers up to n.
def sum1ToN(n):
    return n * (n + 1) // 2

if __name__ == '__main__':
# Test sum1ToN function.
    print("Sum of integers from 1 to 10 = ", sum1ToN(10))

if __name__ == '__main__':
    nl(4)
# Exercise 5:
# A function to take reciprocal of a number.
def reciprocal(x):
    return 1/x

# Test reciprocal function.
if __name__ == '__main__':
    print("Reciprocal of 0.25 = ", reciprocal(0.25))
    print("Result of performing reciprocal(0):",'''
print("Reciprocal of 0 = ", reciprocal(0))
↑
Traceback (most recent call last):
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch1Section5P1.py", line 54, in <module>
    print("Reciprocal of 0 = ", reciprocal(0))
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch1Section5P1.py", line 50, in reciprocal
    return 1/x
ZeroDivisionError: division by zero''')
    print("Reciprocal of 10 = ", reciprocal(10))

if __name__ == '__main__':
    nl(5)
# Exercise 6:
# Definition of double from Example 1.
def double(x):
    return 2 * x

# Calling of both, double and the incrementByOne functions.
if __name__ == '__main__':
    print("Result of double(incrementByOne(5)) = ", double(incrementByOne(5)))
    print("Result of incrementByOne(double(5)) = ", incrementByOne(double(5)))
'''
In the first print statement, the incrementByOne function is called on 5, returning 6, then the double function is
performed, finally returning 12.
Whereas, in the second statement, the double function is first called on 5, returning 10, then the incrementByOne
function is performed, finally returning 11.
'''

if __name__ == '__main__':
    nl(6)
# Exercise 7:
# Try adding one to the string '123' by calling the incrementByOne function on the '123' string.
    print("Result of incrementByOne('123'): ",
'''
print(incrementByOne('123'))
↑
Traceback (most recent call last):
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch1Section5P1.py", line 81, in <module>
    print("Result of incrementByOne('123'): ", incrementByOne('123'))
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch1Section5P1.py", line 26, in incrementByOne
    return x + 1
TypeError: must be str, not int''')