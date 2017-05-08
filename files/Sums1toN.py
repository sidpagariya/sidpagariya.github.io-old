################################################################
#
#    Sums1ToN.py
#
#    Chapter 4 Example 6
#
#    This program prompts the user to enter a positive integer n
#    and displays the value of 1 + 2 + ... + n
#
################################################################ 

nMax = -1
while nMax <= 0:
    s = input("Enter a positive integer: ")

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
    n += 1

