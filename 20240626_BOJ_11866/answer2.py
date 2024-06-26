import sys

N, K = [int(i) for i in sys.stdin.readline().strip().split()]
circle = [int(i) for i in range(1, N+1)]
josephus = []
index = -1

for f in range(N):
    loop_count = 0
    while loop_count < K:
        index += 1
        if index >= N: index -= N

        if circle[index] == 0:
            continue
        else:
            loop_count += 1
    
    josephus.append(str(circle[index]))
    circle[index] = 0

print('<' + ", ".join(josephus) + '>')