import itertools
import json

def perm(i):
    for tup in itertools.permutations(range(1, i + 1)):
        flag = True
        for j in range(len(tup) - 1):
            diff = abs(tup[j] - tup[j + 1])
            if diff < 2 or diff > 4:
                flag = False
                break
        if flag:
            return tup
    return tuple([-1])

output = {}

with open('perm.txt', 'w') as file:
    for i in range(2, 1001):
        output[i] = perm(i)
    file.write(json.dumps(output))
