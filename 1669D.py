def solve():
    n = int(input())
    s = input().strip()
    lst = s.split('W')

    while '' in lst:
        lst.remove('')

    for wrd in lst:
        if 'B' not in wrd or 'R' not in wrd:
            print("NO")
            return 
    print("YES")


t = int(input())
while(t>0):
    solve()
    t-=1

    