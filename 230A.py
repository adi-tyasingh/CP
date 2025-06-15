def solve():
    lst = []
    line = input()
    data = line.split()
    s = int(data[0])
    n = int(data[1])
    for i in range(0,n):
        line = input()
        data = line.split()
        tup = (int(data[0]),int(data[1]))
        lst.append(tup)
    lst.sort()
    #print(lst)
    for t in lst:
        x= t[0]
        y= t[1]
        if(x>=s):
            print("NO")
            return 0
        else:
            s += y
    print("YES")
    return 0

solve()