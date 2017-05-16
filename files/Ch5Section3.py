"""
NAME    :   Siddhant Pagariya
DATE    :   MAY 15 2017
GROUP   :   Advanced CS
PROG    :   Section 5.3 - "The Binary, Octal, and hexadecimal Systems"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 5.3 \"The Binary, Octal, and hexadecimal Systems\" #6-7\nAdvanced CS\n")

if __name__ == '__main__':
    nl(5)
# Exercise 6:
def countbits(n):
    'Returns the count of bits set to 1 in a positive integer'
    k = 0
    if n == 0:
        return '0'
    numToConvert = n
    while numToConvert > 0:
        lastDigit = numToConvert % 2
        if lastDigit == 1:
            k+=1
        numToConvert //= 2
    return k
# Test countbits function.
print("countbits(1048575) = ", countbits(1048575))
print("countbits(7) = ", countbits(7))
print("countbits(20) = ", countbits(20))

if __name__ == '__main__':
    nl(6)
# Exercise 7:
# Returns a string that represents a given non-negative
# integer n as a string of binary digits.
# Precondition: n is an int; n >= 0
def intToBin(n):
    '''Converts n >= 0 into a string of binary digits
    and returns that string'''
    s = ""
    if n == 0:
        return '0'
    numToConvert = n
    while numToConvert > 0:
        lastDigit = numToConvert % 2
        s = str(lastDigit) + s
        numToConvert //= 2
    return s

# Test intToBin function.
nM = -1
while nM < 0:
    s = input("Enter a non-negative integer: ")
    try:
        nM = int(s)
    except ValueError:
        print("Invalid input.")
print(nM, "represented in binary is:", intToBin(nM))