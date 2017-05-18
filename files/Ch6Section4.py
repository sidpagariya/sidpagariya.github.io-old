"""
NAME    :   Siddhant Pagariya
DATE    :   MAY 15 2017
GROUP   :   Advanced CS
PROG    :   Section 6.4 - "if-else Statements in Python"
SOURCES :   "Mathematics for the Digital Age and Programming in Python" by Litvin and Litvin
NOTE    :   Python 3.6 (Newer syntax)
"""

from Ch1Section5P1 import nl
from customStart import signature
from random import choice

if __name__ == '__main__':
# Signature.
    signature("Section 6.4 \"if-else Statements in Python\" #1, 4, 5, 6, 10")

if __name__ == '__main__':
    nl(0)
# Exercise 1:
print("n is a positive integer and it is an even number: n > 0 and n % 2 == 0")

if __name__ == '__main__':
    nl(3)
# Exercise 4:
def numDaysInMonth(month):
    if month == "January" or month == "March" or month == "May" or month == "July" or month == "August" or month == "October" or month == "December":
        return 31
    elif month == "April" or month == "June" or month == "September" or month == "November":
        return 30
    else:
        return 28
# Test the numDaysInMonth function.
print("numDaysInMonth('January'):", numDaysInMonth('January'))
print("numDaysInMonth('February'):", numDaysInMonth('February'))
print("numDaysInMonth('April'):", numDaysInMonth('April'))
print("numDaysInMonth('December'):", numDaysInMonth('December'))

if __name__ == '__main__':
    nl(4)
# Exercise 5:
def isLeapYear(year):
    if year%4 == 0 and year%100 != 0:
        return True
    elif year%400 == 0:
        return True
    else:
        return False
# Test isLeapYear function.
print("isLeapYear(2000):", isLeapYear(2000))
print("isLeapYear(1900):", isLeapYear(1900))
print("isLeapYear(1844):", isLeapYear(1844))

if __name__ == '__main__':
    nl(5)
# Exercise 6:
def isPrime(n):
    'Returns True if n is a prime number; otherwise returns false'
    if n < 2:
        return False
    d = 2
    while d <= n//2:
        if n%d == 0:
            return False
        d += 1
    return True
print("Prime Numbers less than 1000: ")
for i in range(1, 1000):
    if isPrime(i):
        print(i, end=" ")
print()

if __name__ == '__main__':
    nl(9)
# Exercise 10:
def move(c):
    if c == "r":
        return 'Rock'
    elif c == "p":
        return "Paper"
    elif c == "s":
        return 'Scissors'
    elif c == "l":
        return 'Lizard'
    else:
        return 'Spock'

def compareMoves(playerc, compc):
    if compc == playerc:
        return 0
    if compc == 'r':
        if playerc == 'p' or playerc == 'k':
            return 1
        else:
            return -1
    if compc == 'p':
        if playerc == 's' or playerc == 'l':
            return 1
        else:
            return -1
    if compc == 's':
        if playerc == 'r' or playerc == 'k':
            return 1
        else:
            return -1
    if compc == 'l':
        if playerc == 'r' or playerc == 's':
            return 1
        else:
            return -1
    if compc == 'k':
        if playerc == 'l' or playerc == 'p':
            return 1
        else:
            return -1

compscore = 0
pscore = 0
while (True):
    print("Rock... Paper... Scissors... Lizard... Spock... Shoot!")

    movesp = ['r', 'p', 's', 'l', 'p']
    plmove = input('Make your move (r, p, s, l, k) or q (to quit): ')
    if plmove == 'q':
        break
    compmove = choice(movesp)
    print("\nI said", move(compmove), "and you said", move(plmove))

    winCode = compareMoves(plmove, compmove)
    if winCode == 0:
        print('Meh, a tie.', end=" ")
    elif winCode < 0:
        compscore += 1
        print('Ha, you got zapped!', end=" ")
    else:
        pscore += 1
        print('Oops, you won!', end=" ")

    print(str(compscore) + ":" + str(pscore), "\n")

if (compscore > pscore):
    print('Sorry! You lost!', end=" ")
elif (compscore < pscore):
    print('Congratulations! You won!', end=" ")
else:
    print('Both of us did great: A tie!', end=" ")

print(str(compscore) + ":" + str(pscore))