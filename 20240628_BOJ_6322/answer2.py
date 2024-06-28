import sys
from math import sqrt

count = 1

while True:
    a, b, c = [int(i) for i in sys.stdin.readline().strip().split()]

    if (a+b+c) == 0: break
    if count > 1: print("")

    print(f"Triangle #{count}")
    
    result = 0.0

    if a == -1:
        if b >= c: print('Impossible.')
        else:
            result = sqrt(c**2 - b**2)
            print(f'a = {result:.3f}')
    elif b == -1:
        if a >= c: print("Impossible.")
        else:
            result = sqrt(c**2 - a**2)
            print(f'b = {result:.3f}')
    elif c == -1:
        result = sqrt(a**2 + b**2)
        print(f"c = {result:.3f}")
    
    count += 1
