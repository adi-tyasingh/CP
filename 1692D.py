T = int(input())

for _ in range(T):
    n = int(input())
    s = input()

    count0 = s.count('0')
    count1 = s.count('1')
    print(count1, count0, "-------")
    if count0 > count1:
        length = count0 - count1
    else:
        length = count1 - count0

    print(length)