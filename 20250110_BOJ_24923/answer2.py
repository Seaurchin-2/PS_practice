import sys

line = sys.stdin.readline().strip()

if line[-3:] != 'eh?':
    print('Imposter!')
else:
    print('Canadian!')
