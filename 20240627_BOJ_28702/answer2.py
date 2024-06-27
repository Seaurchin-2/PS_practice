import sys

s_ = []
s4 = 0
for i in range(3):
    s_.append(sys.stdin.readline().strip())

for s in s_:
    if s.isdecimal():
        s4 = int(s) + (3 - s_.index(s))
        break
    else:
        continue

if s4 % 15 == 0:
    print('FizzBuzz')
elif s4 % 3 == 0:
    print('Fizz')
elif s4 % 5 == 0:
    print('Buzz')
else:
    print(s4)
