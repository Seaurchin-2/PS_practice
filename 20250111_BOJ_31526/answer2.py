import sys

r, c = [int(_) for _ in sys.stdin.readline().strip().split()]

if r == 1 and c != 1:
    print(0)
else:
    result = r
    for _ in range(c-1):
        result *= r-1
        result %= 998244353
    print(result)
