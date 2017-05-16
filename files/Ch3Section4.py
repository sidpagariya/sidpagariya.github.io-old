"""
NAME    :   Siddhant Pagariya
DATE    :   FEB 15 2017
GROUP   :   Advanced CS
PROG    :   Section 3.4 - "More About Python Functions"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 3.4 \"More About Python Functions\" #3-8\nAdvanced CS\n")

if __name__ == '__main__':
    nl(2)
# Exercise 3:
# String padding with spaces.
def rightJustify(s, w):
    return (w-len(s))*' '+s

# Test rightJustify function.
print(rightJustify("Sid", 6))

if __name__ == '__main__':
    nl(3)
# Exercise 4:
def print10Stars():
    print(10 * '*')

def make10Stars():
    return (10 * '*')
# Test print10Stars function.
print(print10Stars()) # Prints ten stars when the function is run, then "None", since it's a void function.
# Test make10Stars function.
print(make10Stars()) # Prints 10 stars that were returned from the function.
if __name__ == '__main__':
    nl(4)
# Exercise 5:
def printTriangle(n, ch):
    while n > 0:
        print(n * ch)
        n -= 1
    return 1
# Test printTriangle function.
print(printTriangle(2, '*') + printTriangle(3, '#'))
#^ Should return 2, but before that, a star triangle and then a pound symbol triangle is printed.

if __name__ == '__main__':
    nl(5)
# Exercise 6:
def sum1ToN(n):
    if n > 0:
        return n*(n+1)/2
# Test sum1ToN function.
print(sum1ToN(6))
print(sum1ToN(0))

if __name__ == '__main__':
    nl(6)
# Exercise 7:
def readInt():
    s = input('Enter an integer: ')
    return int(s)
# test readInt function.
# readInt()
print('Enter an integer: asdfgh', '''
Traceback (most recent call last):
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch3Section4.py", line 67, in <module>
    readInt()
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch3Section4.py", line 65, in readInt
    return int(s)
ValueError: invalid literal for int() with base 10: 'asdfg' ''')


if __name__ == '__main__':
    nl(7)
# Exercise 8:
# print(len(0))
'''Traceback (most recent call last):
  File "<pyshell#0>", line 1, in <module>
    print(len(0))
TypeError: object of type 'int' has no len()'''
print("print(len('0')) = ", len('0')) # = 1
print("print(len('''0''')) = ", len('''0''')) # = 1
print("print(len('''''')) = ", len('''''')) # = 0
print("print(len([0])) = ", len([0])) # = 1
print("print(len([])) = ", len([])) # = 0
# print(len((0)))
'''Traceback (most recent call last):
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch3Section4.py", line 90, in <module>
    print(len((0)))
TypeError: object of type 'int' has no len()'''
print("print(len(range(0)))", len(range(0))) # = 0