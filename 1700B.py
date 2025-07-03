
def solve():
  n = int(input())
  num = input()
  s = '9' * n
  res = str(int(s) - int(num) + 2)
  if len(res) < n:
    #print(len(res))
    tmp = ('1'*(n-1)) + '0'
    res = str(int(res) + int(tmp))
  print(res)


tc = int(input())
while( tc>0 ):
  solve()
  tc -= 1