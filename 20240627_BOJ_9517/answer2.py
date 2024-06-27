import sys

MAX_TIME = 210

K = int(sys.stdin.readline().strip())
N = int(sys.stdin.readline().strip())
questions = []
number = K
current_time = 0

for i in range(N):
    questions.append([_ for _ in sys.stdin.readline().strip().split()])
    questions[i][0] = int(questions[i][0])

for q in questions:
    current_time += q[0]

    if current_time > MAX_TIME:
        break

    if q[1] == 'T':
        number += 1
        if number > 8: number -= 8
    else: continue

print(number)
