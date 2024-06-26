import sys

N = int(sys.stdin.readline())
shirts = [int(i) for i in sys.stdin.readline().strip().split()]
T, P = [int(i) for i in sys.stdin.readline().strip().split()]

result_T = 0
result_P = [0, 0]

for s in shirts:
    if s % T == 0:
        result_T += int(s / T)
    else:
        result_T += s // T + 1
    
result_P[0] = N // P
result_P[1] = N % P

print('{}\n{} {}'.format(result_T, result_P[0], result_P[1]))
