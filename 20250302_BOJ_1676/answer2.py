import sys

N = int(sys.stdin.readline().strip())

answer = N // 5
answer += N // 25
answer += N // 125

print(answer)
