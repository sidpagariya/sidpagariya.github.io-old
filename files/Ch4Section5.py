"""
NAME    :   Siddhant Pagariya
DATE    :   MAY 8 2017
GROUP   :   Advanced CS
PROG    :   Section 4.5 - "Sequences, Sums, Iterations"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl

if __name__ == '__main__':
# Signature.
    print("Siddhant Pagariya\nSection 4.5 \"Functions Arguments\" #1-3, 5, 6, 8\nAdvanced CS\n")

if __name__ == '__main__':
    nl(0)
# Exercise 1:
    nMax = 0
    while nMax <= 0 and nMax % 2 == 0:
        s = input("Enter a positive odd integer: ")

        try:
            nMax = int(s)
        except ValueError:
            print("Invalid input")
    print() # print a blank line
    n = 1
    sum1n = 0
    while n <= nMax:
        sum1n += n
        print('{0:3d} {1:6d}'.format(n, sum1n))
        n += 2

if __name__ == '__main__':
    nl(1)
# Exercise 2:
    n = 0
    while n <= 0:
        s = input("Enter a positive integer: ")
        try:
            n = int(s)
            if n <= 0:
                print("Try again.")
        except ValueError:
            print("Invalid input. Try again.")
    prod = 1
    print("Positive multiples of 6 that do not exceed " + str(n) + ", are: ")
    while prod*6 <= n:
        print(prod*6, end=" ")
        prod += 1
    print("")


if __name__ == '__main__':
    nl(2)
# Exercise 3:
    nMax = -1
    while nMax <= 0:
        s = input("Enter a positive integer: ")
        try:
            nMax = int(s)
        except ValueError:
            print("Invalid input")
    print() # print a blank line
    n = 1
    fact = 1
    while n <= nMax:
        fact *= n
        print('{0:3d} {1:10d}'.format(n, fact))
        n += 1



if __name__ == '__main__':
    nl(4)
# Exercise 5:
def printSquare(n):
    print(n * "*" + "\n" + (n-2) * ("*" + (n-2) * " " + "*\n") + n * "*")

# Test printSquare function.
print("printSquare(7): ")
printSquare(7)

if __name__ == '__main__':
    nl(5)
# Exercise 6:
def myPow(x, n):
    powe=1
    while n > 0:
        powe *= x
        n -= 1
    return powe

# Test myPow function.
print("myPow(7, 8) = ", myPow(7, 8))

if __name__ == '__main__':
    nl(7)
# Exercise 8:
def sumOfDivisors(n):
    d = 1
    sumDivs = 0
    while d < n:
        if n%d == 0:
            sumDivs += d
        d += 1
    return sumDivs

# Test sumOfDivisors function.
print("sumOfDivisors(6) = ", sumOfDivisors(6))