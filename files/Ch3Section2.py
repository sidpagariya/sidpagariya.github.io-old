"""
NAME    :   Siddhant Pagariya
DATE    :   FEB 15 2017
GROUP   :   Advanced CS
PROG    :   Section 3.2 - "Variables in Python"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 3.2 \"Exploring Functions in Python\" #6, 7, 8\nAdvanced CS\n")

if __name__ == '__main__':
    nl(5)
# Exercise 6:
# Trying to set age to an integer value, 5.
age = 5
print("print(age): ", age)
print("Result of performing print(len(age)):", '''
print(len(age))
↑
Traceback (most recent call last):
  File "/Users/Siddhant/Desktop/2016-17/KAMSC/[5-2] Advanced CS/MathematicsForDigitalAge/Ch3Section2.py", line 23, in <module>
    print(len(age))
TypeError: object of type 'int' has no len()
''') # Gives an error since age isn't really a "Sized" object.
# Trying to set age to a string value, 'five'.
age = 'five'
print("print(age): ", age)
print("Result of performing print(len(age)):", len(age)) # Returns the length of the string, 'five', which is 4

if __name__ == '__main__':
    nl(6)
# Exercise 7:
# Define pow4 function with only two multiply operations.
def pow4(k):
    k = k*k
    k = k*k
    return k

# Test the pow4 function.
print("2 to the fourth power is: ", pow4(2))
print("5 to the fourth power is: ", pow4(5))
print("7 to the fourth power is: ", pow4(7))

if __name__ == '__main__':
    nl(7)
# Exercise 8:
# Find output for the set of commands performed below.
n = 5
s = '+' * n # Multiplies the string '+' and stores it in s.
print("print(s): ", s)  # Outputs '+++++' since the previous command stored '+++++' in s and here, s is output.
print("print('len = ' + str(len(s))): ", 'len = ' + str(len(s))) # Prints the length of s, '+++++', which is 5.