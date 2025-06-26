
def solve():
    a,b,c = map(int, input().strip().split())
    if(b==0):
        ans = ('0' * a) + ('1' * c)
        print(ans+ans[0])
    else:
        res = ""
        for i in range(0, b+1):
            res += str(int((not i&1)))
        res = '1'*(c+1) + '0'*(a+1) + res[2:] 
        print(res)

t = int(input())
while t>0:
    solve()
    t -= 1