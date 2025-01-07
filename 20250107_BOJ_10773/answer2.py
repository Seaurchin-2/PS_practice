import sys

K = int(sys.stdin.readline().strip())
arr = []

for _ in range(K):
    num = int(sys.stdin.readline().strip())

    if num == 0:
        if arr:
            del arr[-1]
    else:
        arr.append(num)

print(sum(arr))