def solve():
    num = input().strip()
    num = num[::-1]
    res = []
    for i in range(len(num)):
        ch = num[i]
        if (ch!='0'):
            res.append(int(ch)*int(10**i))
    print(len(res))
    for n in res:
        print(n, end=' ')
    print()
        

t = int(input())
while(t>0):
    solve()
    t-=1