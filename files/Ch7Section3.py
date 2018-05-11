"""
NAME    :   Siddhant Pagariya
DATE    :   MAY 15 2017
GROUP   :   Advanced CS
PROG    :   Section 7.3 - "Digital Circuits and Bitwise Operators"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl
from customStart import signature
from random import choice

if __name__ == '__main__':
# Signature.
    signature("Section 7.3 \"Digital Circuits and Bitwise Operators\" #9, 10")

if __name__ == '__main__':
    nl(8)
# Exercise 9:
def intToHex(n):
    s = ''
    hdigs = '0123456789abcdef'
    count = 1
    while count <= 8:
        l4bits = (n & 0x0f)
        s = hdigs[l4bits] + s
        n >>= 4
        count += 1
    return s
# Test the intToHex function.
print("intToHex(4294967295):", intToHex(4294967295))
print("intToHex(65536):", intToHex(65536))
print("intToHex(0):", intToHex(0))

if __name__ == '__main__':
    nl(9)
# Exercise 10:
def revBits(n):
    revv=0
    abit = 0x01
    rBit = 0x20000000
    while rBit != 0:
        if (n & abit) != 0:
            revv |= rBit
        abit <<= 1
        rBit >>= 1
    return revv
# Test the revBits function.
print("revBits(268435455):", revBits(268435455))
print("revBits(4294967297):", revBits(4294967297))
print("revBits(0):", revBits(0))